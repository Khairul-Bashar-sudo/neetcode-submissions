class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> hashs(26,0),hasht(26,0);
        for(int i=0; i<s.size();i++){
            hashs[s[i]-'a']++;
        }
        for(int i=0; i<t.size();i++){
            hasht[t[i]-'a']++;
        }
        for(int i=0 ;i<26;i++){
            if(hashs[i]!=hasht[i]) return false;
        }
        return true;
    }
};
