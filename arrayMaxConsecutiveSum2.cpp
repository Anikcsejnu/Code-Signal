int solution(vector<int> inputArray) {
    int currentMax = 0, globalMax = INT_MIN, n = inputArray.size();
    
    for(int i = 0;i < n;i++) {
        currentMax = inputArray[i] + currentMax;
        
        if(currentMax < inputArray[i]) {
            currentMax = inputArray[i];
        }
        
        if(globalMax < currentMax) {
            globalMax = currentMax;
        }
        
    }
    
    return globalMax;
}
