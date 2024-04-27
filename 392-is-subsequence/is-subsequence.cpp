class Solution {
public:
    bool isSubsequence(string s, string t) {
        int indexs=0;
        for(int i=0;i<t.size();i++){
            if(s[indexs]==t[i]){
                indexs++;
            }
        }
        if(indexs>=s.size())
        {
            return true;
        }else{
            return false;
        }           
    }
};