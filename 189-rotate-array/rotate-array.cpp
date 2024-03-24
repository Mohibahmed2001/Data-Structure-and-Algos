class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //so we are going to be using mod here to determine where the number goes
        vector<int> ans(nums.size());
        int num=0;
        int n =nums.size();
        for(int i =0;i<nums.size();i++){
            num =i+k;
            int index = num%n;
            ans[index] =nums[i];

        }
        nums= ans;
        
    }
};