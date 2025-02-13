#include<iostream>
using namespace std;

#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        if (amount == 0) return 0;
        if (amount < 0) return -1;
        int result = coinChange1(coins, amount);
        return (result == INT_MAX - 1) ? -1 : result; 
    }
private:
    int coinChange1(vector<int>& coins, int amount) {
        if (amount == 0) return 0; 
        if (amount < 0) return INT_MAX - 1; 
        int minCoins = INT_MAX;
        for (int coin : coins) {
            int remainingAmount = amount - coin;
            int subResult = coinChange1(coins, remainingAmount);
            if (subResult != INT_MAX - 1) {
                minCoins = min(minCoins, 1 + subResult);
            }
        }
        
        return minCoins;
    }
};

    