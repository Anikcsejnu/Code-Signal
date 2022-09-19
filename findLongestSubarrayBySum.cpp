vector<int> solution(int s, vector<int> arr) {
    int n = arr.size(), start = 0, currSum = 0;
    vector<int> ans{-1};
    
    for(int i = 0;i < n;i++) {
        
        currSum += arr[i];
        
        while(currSum > s && start < i) {
            currSum -= arr[start];
            start++;
        }
        
        if(currSum == s) {
            if((ans.size() == 1) || (i - start > ans[1] - ans[0])) {
                ans[0] = start + 1;
                if(ans.size() == 1) {
                    ans.push_back(i + 1);
                }
                else {
                    ans[1] = i + 1;
                }
            }
        }
    }
    
    return ans;
}
