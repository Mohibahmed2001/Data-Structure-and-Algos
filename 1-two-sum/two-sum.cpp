class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int>mapper;
       for(int i=0;i<nums.size();i++){
        int complement = target -nums[i];
        if(mapper.find(complement)!=mapper.end()){
            return {i,mapper[complement]};
        }
        mapper[nums[i]] = i;
       }
       return {};
    }
    };
    