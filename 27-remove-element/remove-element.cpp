class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int i = 0;
        int counter = 0;
        
        while (i < nums.size()) {
            if (nums[i] == val) {
                nums.erase(nums.begin() + i);
            } else {
                i++;
                counter++;
            }
        }
        return counter;
    }
};
