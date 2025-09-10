// https://leetcode.com/problems/n-th-tribonacci-number/description/

// https://leetcode.com/problems/n-th-tribonacci-number/solutions/7156425/simple-beginner-friendly-dp-beats-100-by-zvzk

// recursive approach - TLE
class Solution
{
public:
    int tribonacci(int n)
    {
        if (n <= 1)
            return n;
        if (n == 2)
            return 1;
        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
};

// memoization approach - top-down
class Solution
{
public:
    int dp[40] = {0};
    int tribonacci(int n)
    {
        if (n <= 1)
            return n;
        if (n == 2)
            return 1;
        if (dp[n] != 0)
            return dp[n];
        return dp[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
};

// iterative/tabulation approach - bottom-up
class Solution
{
public:
    int dp[40] = {0};
    int tribonacci(int n)
    {
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        }
        return dp[n];
    }
};
