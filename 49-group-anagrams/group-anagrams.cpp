class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string,vector<string>> ans;
    for(int i =0;i<strs.size();i++){
        string key = strs[i];
        sort(key.begin(),key.end());
        ans[key].push_back(strs[i]);
    }
    vector<vector<string>>result;
    for(auto&elm:ans){
        result.push_back(elm.second);
    }
     return result;
    }
};

