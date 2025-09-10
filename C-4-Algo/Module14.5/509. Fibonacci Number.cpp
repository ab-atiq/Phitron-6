// https://leetcode.com/problems/fibonacci-number/description/

// https://leetcode.com/problems/fibonacci-number/solutions/7156418/simple-beginner-friendly-dp-beats-100-by-k5eo/

// recursive approach
class Solution
{
public:
    int fib(int n)
    {
        if (n <= 1)
            return n;
        return fib(n - 1) + fib(n - 2);
    }
};

// memoization approach - top-down
class Solution
{
public:
    int dp[31] = {0};
    int fib(int n)
    {
        if (n <= 1)
            return n;
        if (dp[n] != 0)
            return dp[n];
        return dp[n] = fib(n - 1) + fib(n - 2);
    }
};

// iterative/tabulation approach - bottom-up
class Solution
{
public:
    int dp[31] = {0};
    int fib(int n)
    {
        dp[1] = 1;
        for (int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};