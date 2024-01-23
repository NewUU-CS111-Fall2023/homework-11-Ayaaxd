/*
 * Author: Sitora Aslonova
 * Date: 23/01/2024
 * Name:
 */
#include <vector>
using namespace std;

bool canPartition(vector<int>& nums) {
    int total = 0;
    for (int num : nums) total += num;

    if (total % 2 != 0) return false;

    int subsetSum = total / 2;
    vector<bool> dp(subsetSum + 1, false);
    dp[0] = true;

    for (int num : nums) {
        for (int i = subsetSum; i >= num; i--) {
            dp[i] = dp[i] || dp[i - num];
        }
    }

    return dp[subsetSum];
}
