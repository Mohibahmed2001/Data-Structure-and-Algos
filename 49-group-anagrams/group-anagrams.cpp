class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ans;
        
        // Iterate through the input strings
        for (int i = 0; i < strs.size(); ++i) {
            string key = strs[i];
            sort(key.begin(), key.end());
            ans[key].push_back(strs[i]);
        }
        
        vector<vector<string>> result;
        
        // Iterate through the unordered_map
        for (auto it = ans.begin(); it != ans.end(); ++it) {
            result.push_back(it->second);
        }
        
        return result; 
    }
};

