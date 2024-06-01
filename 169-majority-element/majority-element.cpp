class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            int counter=0;
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    counter++;
                }
            }
            if(counter>majority){
                    return nums[i];
                }
                
         }
        
        return -1;
    }
};