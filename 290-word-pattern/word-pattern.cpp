class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp1;
        unordered_map<string,char> mp2;
        string temp="";
        vector<string>st;
        for(int j=0;j<s.size();j++){
            if(s[j]==' '){
                st.push_back(temp);
                temp="";
            }else{
                temp+=s[j];
            }
        }
        st.push_back(temp);
        if(pattern.size()!=st.size()){
            return false;
        }
        for(int i =0;i<pattern.size();i++){
             if(mp1.find(pattern[i])!=mp1.end() && mp1[pattern[i]]!=st[i]){
                return false;
             }
             if(mp2.find(st[i])!=mp2.end() && mp2[st[i]]!=pattern[i]){
                return false;
             }
             mp1[pattern[i]]=st[i];
             mp2[st[i]]=pattern[i];

        }
        return true;
        
    }
};