class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> num_indices; // to store the index of each element

        for (int i = 0; i < nums.size(); i++) {
            if (num_indices.find(nums[i]) != num_indices.end()) {
                if (i - num_indices[nums[i]] <= k) {
                    return true;
                }
            }
            num_indices[nums[i]] = i;
        }
        
        return false;
    }
};