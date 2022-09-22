bool solution(vector<int> nums, int k) {
    unordered_map<int, int> mp;
    
    for(int i = 0;i < nums.size();i++) {
        mp[nums[i]] = -1;
    }
    
    for(int i = 0;i < nums.size();i++) {
        if(mp[nums[i]] != -1) {
            int dif = i - mp[nums[i]];
            if(dif <= k) return true;
        }
        mp[nums[i]] = i;
    } 
    return false;
}