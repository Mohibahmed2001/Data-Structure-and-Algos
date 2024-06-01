class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>counts;
        for(int num:nums){
            if(counts.find(num)==counts.end()){
                counts[num]=1;
            }else{
                counts[num]+=1;
            }
        }
        for(auto entry:counts){
            if(entry.second>nums.size()/2)
            return entry.first;
        }
        return 0;
    }
};