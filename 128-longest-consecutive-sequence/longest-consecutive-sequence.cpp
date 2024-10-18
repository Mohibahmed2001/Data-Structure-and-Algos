class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_set<int>mp;
        for(auto elm:nums){
            mp.insert(elm);
        }
        int counter=1;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]-1)==mp.end()){
                int length=1;
                while(mp.find(nums[i]+length)!=mp.end()){
                length++;
                 counter = max(counter,length);
            }
            }
            
            
        }
        return counter;
    }
};