int solution(int n) {
    int dp[n];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    dp[1] = 1;
    for(int i = 2;i <= n;i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}