int solution(vector<int> nums, int m) {
    int n = nums.size(), sum = 0;
    vector<int> result(n, 1);
    
    for(int i = 1;i < n;i++) {
        result[i] = (result[i-1] * nums[i-1]) % m;
    }
    
    int right = 1;
    
    for(int i = n - 1;i >= 0;i--) {
        result[i] = (result[i] * right) % m;
        right = (right * nums[i]) % m;
    }
    
    for(int i = 0;i < n;i++) {
        sum += result[i] % m;
    }
    
    return sum % m;
}
