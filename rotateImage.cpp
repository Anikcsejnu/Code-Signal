vector<vector<int>> solution(vector<vector<int>> a) {
    
    int n = a.size();
    
    for(int i = 0; i < n;i++) {
        for(int j = i;j < n - i - 1;j++) {
            swap(a[i][j], a[j][n-i-1]);
            swap(a[i][j], a[n-i-1][n-j-1]);
            swap(a[i][j], a[n-j-1][i]);
        }
    } 
    return a;
}
