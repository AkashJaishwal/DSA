#include <vector>
#include <algorithm>

class Solution
{
public:
    int countOfPairs(std::vector<int> &nums)
    {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        int maxValue = 50;

        std::vector<std::vector<int>> dp(n, std::vector<int>(maxValue + 1, 0));

        for (int x = 0; x <= nums[0]; ++x)
        {
            dp[0][x] = 1;
        }

        for (int i = 1; i < n; ++i)
        {
            int prefixSum = 0;
            for (int x = 0; x <= nums[i]; ++x)
            {
                prefixSum = (prefixSum + dp[i - 1][x]) % MOD;
                dp[i][x] = prefixSum;
            }
        }

        int result = 0;
        for (int x = 0; x <= nums[n - 1]; ++x)
        {
            result = (result + dp[n - 1][x]) % MOD;
        }

        return result;
    }
};
