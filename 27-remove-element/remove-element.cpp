class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counters =0;
        for(int i =0;i <nums.size();i++){
            if(val!=nums[i]){
                nums[counters]=nums[i];
                counters++;

        }}
        return counters;
    }
};