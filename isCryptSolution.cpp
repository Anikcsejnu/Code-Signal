bool solution(vector<string> crypt, vector<vector<char>> solution) {
    int num[3] = {0};
    
    for(int i = 0;i < 3;i++) {
        int power = crypt[i].size() - 1;
        for(int j = 0;j < crypt[i].size();j++) {
            for(auto mp: solution) {
                if(crypt[i][j] == mp[0]) {
                    if(mp[1] == '0' && j == 0 && power != 0){
                        return false;
                    }
                    num[i] *= 10;
                    num[i] += (mp[1] - '0');
                }
                
            }
        }
    }
    
    if(num[0] + num[1] != num[2]) {
        return false;
    }
    
    return true;
}