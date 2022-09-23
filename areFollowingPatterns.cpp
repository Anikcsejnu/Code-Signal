bool solution(vector<string> strings, vector<string> patterns) {
    int n = strings.size();
    
    map<string, string> sToP;
    map<string, string> pToS;
    for(int i = 0;i < n;i++) {
        auto &s = strings[i];
        auto &p = patterns[i];
        
        if(sToP.count(s) > 0 && sToP[s] != p) {
            return false;
        }
        if(pToS.count(p) > 0 && pToS[p] != s) {
            return false;
        }
        sToP[s] = p;
        pToS[p] = s;
    }
    return true;
}
