class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
       string prefix="";
       prefix = v[0];
       for(int i=1;i<v.size();i++){
            int j=0;
            while(j<v[i].size()&&j<prefix.size()&&prefix[j]==v[i][j]){
                j++;
            }
            prefix = prefix.substr(0,j);
            if(prefix==""){
                return "";
            }
        
       }
       return prefix;
    }
};