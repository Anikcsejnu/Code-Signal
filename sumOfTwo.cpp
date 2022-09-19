bool solution(vector<int> a, vector<int> b, int v) {
    unordered_map<int, bool> hash;
    
    for(int i = 0;i < a.size();i++) {
        int remain = v - a[i];
        hash[remain] = true;
    }
    
    for(int i = 0;i < b.size();i++) {
        if(hash.count(b[i])) {
            return true;
        }
    }
    
    return false;
}
