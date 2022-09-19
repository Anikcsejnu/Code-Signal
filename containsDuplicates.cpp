bool solution(vector<int> a) {
    unordered_map<int, bool> hash;
    
    for(int i = 0;i < a.size();i++) {
        if(hash.count(a[i])) {
            return true;
        }
        else {
            hash[a[i]] = true;
        }
    }
    
    return false;
}