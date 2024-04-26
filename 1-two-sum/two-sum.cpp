class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int>Mapper;
       for(int i=0;i<nums.size();i++){
            Mapper[nums[i]]=i;
       }
       for(int i =0;i<nums.size();i++){
            int complement = target -nums[i];
            if(Mapper.find(complement)!=Mapper.end()&&Mapper[complement]!=i){
                return{Mapper[complement],i};
            }
       }
       return{};
       }
    };