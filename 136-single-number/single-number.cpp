class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>ct;
        for(auto num:nums){
            ct[num]++;
            //add in 
        }
        for(auto&[key,value]:ct){
            if(value==1){
                return key;
            }
        }
        return -1;
        
    }
};