class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        vector<string> ans;
        
        // Count frequencies of each word
        for (string& element : words) {
            mp[element]++;
        }
        
        // Create a vector of pairs (frequency, word)
        vector<pair<int,string>> v;
        for (auto& it : mp) {
            v.push_back({it.second, it.first});
        }
        
        // Sort primarily by frequency (in descending order)
        // If frequencies are the same, then sort alphabetically (in ascending order)
        sort(v.begin(), v.end(), [](const pair<int,string>& a, const pair<int,string>& b) {
            if (a.first == b.first) {
                return a.second < b.second; // Alphabetical order
            } else {
                return a.first > b.first; // Decreasing order of frequency
            }
        });
        
        // Collect the top k frequent words
        for (int i = 0; i < k && i < v.size(); ++i) {
            ans.push_back(v[i].second);
        }
        
        return ans;
    }
};
