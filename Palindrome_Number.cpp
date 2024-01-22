/*
Palindrome Number
Given an integer x, return true if x is a palindrome, and false otherwise.

 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.


Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.


Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
 

Follow up: Could you solve it without converting the integer to a string?
*/
class Solution {
public:
    bool isPalindrome(int x) {
        // special cases:
        /*
        As discussed above, when x<0, x is not a palindrome.
        Also if the last digit of the number is 0, in order to be a palindrome, then
        the first digit of the number also needs to be 0.
        Only 0 satisfy this property
        */
        long long temp=x;
        if(x==0)
        {
            return true;
        }
        if(x<0 || x%10==0)
        {
            return false;
        }
        long long rev=0;
        while(temp>0)
        {
            
            rev= rev*10 + temp%10;
            temp=temp/10;

        }
        if(x==rev)
        {
            return true;
        }
        else
        {
            return false;
        }
        
        

    }
};

// Question Link-- https://leetcode.com/problems/palindrome-number/