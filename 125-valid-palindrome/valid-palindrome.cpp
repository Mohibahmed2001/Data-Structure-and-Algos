class Solution {
public:
    bool isPalindrome(string s) {
        string lower= "";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                lower +=tolower(s[i]);
            }
        }
        int l=0;
        int r=lower.size()-1;
        
        while(l<=r){
            if(lower[l]!=lower[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};