class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int answer = target - nums[i];
            if(mp.find(answer)!=mp.end()){
                return{i,mp[answer]};
            }
            mp[nums[i]]=i;
        }
        return {};
        
    }
};