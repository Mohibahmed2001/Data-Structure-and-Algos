class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>s1;
        unordered_map<char,int>t1;
        for(auto elm:s){
            s1[elm]++;
        }
        for(auto elm :t){
            t1[elm]++;
        }
        if(t1!=s1){
            return false;
        }
        return true;
    }
};