class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapper;
        // Populate the map with the indices
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (mapper.find(complement) != mapper.end()) {
                return {mapper[complement], i};
            }
            mapper[nums[i]] = i;
        }
        return {}; // return an empty vector if no solution is found
    }
};
