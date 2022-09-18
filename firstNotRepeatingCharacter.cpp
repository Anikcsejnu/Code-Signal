char solution(string s) {
    int mp[26];
    memset(mp, 0, sizeof(mp));
    
    for(int i = 0;i < s.size();i++) {
        mp[s[i] - 'a']++;
    }
    
    for(int i = 0;i < s.size();i++)  {
        if(mp[s[i] - 'a'] == 1) {
            return s[i];
        }
    }
    
    return '_';
}
