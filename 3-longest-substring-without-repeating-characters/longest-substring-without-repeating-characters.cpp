class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>chars;
        
        int left=0;
        int right=0;
        int total=0;
        while(right<s.length()){
            char ri = s[right];
            chars[ri]++;
                while(chars[ri]>1){
                    char l = s[left];
                    chars[l]--;
                    left++;
                }
            total= max(total,right-left+1);
            right++;
        }
        return total;
        
    }
};