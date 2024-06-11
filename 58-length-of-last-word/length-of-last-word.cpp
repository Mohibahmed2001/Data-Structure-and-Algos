class Solution {
public:
    int lengthOfLastWord(string s) {
        int length =0;
        for(int i=s.size()-1; i>=0;i--){
            if(s[i]==' '&&length!=0){
                break;
            }else if(s[i]==' '){
                continue;
            }else{
                length++;
            }
        }
        return length;

    }
};