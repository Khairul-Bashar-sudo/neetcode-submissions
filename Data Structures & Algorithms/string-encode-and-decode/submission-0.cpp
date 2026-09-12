class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded="";
        for(int i=0; i<strs.size();i++){
            int len=strs[i].size();
            encoded+=to_string(len)+'#'+strs[i];
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        int i=0;

        while(i<s.size()){
            int len=0;
            while(s[i]!='#'){
                len=len*10+(s[i]-'0');
                i++;
            }
            i++;
            string str="";
            while(len>0){
                str+=s[i];
                len--;
                i++;
            }
            decoded_strs.push_back(str);
        
        }
        return decoded_strs;
        
    }
};
