class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter =0;
        for(int i =0;i <nums.size();i++){
            if(val!=nums[i]){
                nums[counter]=nums[i];
                counter++;
        }}
        return counter;
    }
};