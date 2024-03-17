class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        int num=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                num++;
            }else{
                num =1;
            }

            if(num<=2){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
        
    }
};