class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low =0;
        int high =nums.size()-1;
        while(low<=high){
            int medium = (low + high)/2;
            if(nums[medium] == target){
                return medium;
            }else if(nums[medium]>target){
                high = medium-1;
            }else{
                low = medium+1;
            }
        }
        return -1;
        
    }
};