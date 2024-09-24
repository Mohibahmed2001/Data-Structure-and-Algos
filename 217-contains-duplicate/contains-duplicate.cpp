class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto elm: nums){
            if(mp[elm]>=1){
                return true;
            }
            mp[elm]++;
        }
        return false;
    }
};