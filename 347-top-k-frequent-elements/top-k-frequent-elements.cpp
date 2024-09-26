class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    //first we put all the elements into a hash map
    unordered_map<int,int>mp;
    for(auto elm:nums){
        mp[elm]++;
    }  
    //we not have frequency of every element inside mp
    priority_queue<pair<int,int>>tp;
    for(auto elm:mp){
       tp.push({elm.second,elm.first});
    }
    vector<int>answer;
    while(k>0&&!tp.empty()){
        answer.push_back(tp.top().second);
        tp.pop();
        k--;
    }
    return answer;
    }
};