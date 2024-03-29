/*
Reverse String

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]


Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
 

Constraints:

1 <= s.length <= 105
s[i] is a printable ascii character.
*/

#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach [Using Stack]
// Time complexity --> O(n) and Space --> O(n)
class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            st.push(s[i]);
        }
        for(int i=0;i<s.size();i++)
        {
            s[i]=st.top();
            st.pop();
        }
    }
};

// // Using Iterative Approach
// // Time complexity --> O(n) and Space --> O(1)
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            swap(s[i],s[n-i-1]);
        }
        
    }
};

// Using Reverse function
// Time complexity --> O(n) and Space --> O(1)
class Solution {
public:
    void reverseString(vector<char>& s) {

        reverse(s.begin(),s.end());
        
    }
};

// Optimized Approach [Two pointer]
// Time complexity --> O(n) and Space --> O(1)
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        int i=0,j=n-1;
        while(i<j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }


    }
};


// Question link -- https://leetcode.com/problems/reverse-string/