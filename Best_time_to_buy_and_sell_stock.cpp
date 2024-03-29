/*
Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.


Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
*/

#include <bits/stdc++.h>
using namespace std;
// Brute Force Approach --> Time complexity --> O(n^2) and space --> O(1)
/*
One way to do this is to use two nested loops. 
The outer loop will iterate through each element of the array, 
and the inner loop will iterate through the elements following the 
element in the outer loop. For each pair of elements, 
we will calculate the difference and 
update the maximum difference if it is greater than the current maximum difference.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit=0,profit;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(prices[j]>prices[i])
                {
                    profit=prices[j]-prices[i];
                    if(profit>maxProfit)
                    {
                        maxProfit=profit;
                    }

                }
            }
            
        }
        
        return maxProfit;
        
        
        
    }
};

// Above Code is not working because due to time Limit Exceeded but it is correct and it is Brute Force Approach O(n^2), that why it give error of time limit Exceeded

// So basically we need to reduce time here, right ??
// so just use one loop.

// Optimize Approach
// Time complexity --. O(n) and space--> O(1)

/*
just make one variable for keeping value of MINIMUN here, 
and replace whenever you find a minimum number.
and one another variable for keeping a track of profit.
here profit = current index stock value - minimum stock value;
which will update itself everytime , a bigger profit is made.
*/


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int minPrice=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minPrice=min(minPrice,prices[i]);
            maxProfit=max(maxProfit,prices[i]-minPrice);
        }

        return maxProfit;
        
    }
};


// Question link -- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

// Video Link -- https://youtu.be/eMSfBgbiEjk