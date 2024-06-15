class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int>mapper;
        for(int i=0;i<nums.size();i++){
            mapper[nums[i]]=i;
       }
       for(int i=0;i<nums.size();i++){
        int complement = target -nums[i];
        if(mapper.find(complement)!=mapper.end()&&mapper[complement]!=i){
            return {i,mapper[complement]};
        }

       }
       return {};
    }
    };
    