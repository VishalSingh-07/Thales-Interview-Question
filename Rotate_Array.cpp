/*
Rotate Array

Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]


Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 

Follow up:

Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
Could you do it in-place with O(1) extra space?
*/

#include <bits/stdc++.h>
using namespace std;


// Brute Force Approach
// Time complexity -> O(n) and Space -> O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        if(k>=n)
        {
            k = k%n;
        }
        vector<int>arr(n,0);
        int i,j=0;
        for(i=0;i<k;i++)
        {
            arr[i]=nums[n-k+i];
        }
        while(j<n-k)
        {
            arr[i++]=nums[j++];

        }
        for(int i=0;i<n;i++)
        {
            nums[i]=arr[i];
        }
        
    }
};


// -- OR--
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        if(k>=n)
        {
            k = k%n;
        }
        vector<int>arr(n,0);
        int count=0;
        for(int i=n-k;i<n;i++) 
        {
            arr[count++]=nums[i];
        }
        for(int i=0;i<n-k;i++)
        {
            arr[count++]=nums[i];
        }
        // copy arr vector into nums vector
        nums=arr;
    }
};


// Better Approach
// Time complexity -> O(n) and Space -> O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<int> temp(n);
        for(int i=0;i<n;i++)
        {
            temp[(i+k)%n]=nums[i];
        }
        nums=temp;
        
    }
}; 



// Optimized Approach
// Time complexity -> O(n) and Space -> O(1)
class Solution {
public:
    void reverse(vector<int>&nums, int low, int high)
    {
        while(low<high)
        {
            swap(nums[low],nums[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();
        k=k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
}; 


// Question link -- https://leetcode.com/problems/rotate-array/

// My Solution link -- https://leetcode.com/problems/rotate-array/solutions/3240084/3-approach-easy-c-solution-brute-force-optimized-approach-dry-run/