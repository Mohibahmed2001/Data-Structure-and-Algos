class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>winter;
        for(auto it:mp){
            winter.push_back(make_pair(it.second,it.first));
        }
        sort(winter.begin(),winter.end());
        vector<int>ans;
        for(int i=winter.size()-1;i>=0&&k!=0;i--){
            ans.push_back(winter[i].second);
            k--;
        }
        return ans;
    }
};