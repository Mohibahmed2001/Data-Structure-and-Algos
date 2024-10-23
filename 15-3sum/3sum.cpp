class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>answer;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int target =0;
            target -= nums[i];
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                int total = nums[l]+nums[r];
                if(total==target){
                    answer.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    while (nums[l] == nums[l-1] && l < r) {
                        l++;
                    }
                }else if(total<target){
                    l++;
                }else{
                    r--;
                }
            }
        }
        return answer;
        
    }
};