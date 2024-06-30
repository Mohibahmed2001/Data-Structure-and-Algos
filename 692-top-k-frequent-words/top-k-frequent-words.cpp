class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> cnt;
        for (string& word : words) {
            cnt[word]++;
        }

        vector<pair<int, string>> candidates;
        for (auto& p : cnt) {
            candidates.push_back({-p.second, p.first});
        }    
        sort(candidates.begin(), candidates.end());
        
        vector<string> res;
        for (int i = 0; i < k; i++) {
            res.push_back(candidates[i].second);
        }
        return res;
    }
};
