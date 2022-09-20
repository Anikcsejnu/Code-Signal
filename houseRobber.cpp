// Recursive solution with memorization

int recur(vector<int>& nums, int idx, vector<int> &dp) {
    if(idx >= nums.size()) return 0;
    if (dp[idx] != -1) return dp[idx];
    return dp[idx] = max(nums[idx] + recur(nums, idx + 2, dp), recur(nums, idx + 1, dp));
}

int solution(vector<int> nums) {
    vector<int> dp(nums.size() + 1, -1);
    return recur(nums, 0, dp);
}


// Solve with Iterative dp

int solution(vector<int> nums) {
    if(nums.size() == 0) return 0;
    
    int n = nums.size();
    vector<int> dp(n + 1, -1);
    dp[0] = nums[0];
    dp[1]=max(nums[0], nums[1]);
    
    for(int i = 2;i <= n;i++) {
        dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
    }
    
    return dp[n - 1];
}