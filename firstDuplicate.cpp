int solution(vector<int> a) {
    int len = a.size();
    int mp[len + 1];
    
    memset(mp, 0, sizeof(mp));
    
    for(auto num: a) {
        if (mp[num] == 0) {
           mp[num] = 1; 
        } 
        else {
            return num;
        }
    }    
    return -1;
}
