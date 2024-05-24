#include <unordered_map>
#include <string>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> ransom;
        std::unordered_map<char, int> mag;
        
        for (int i = 0; i < ransomNote.size(); ++i) {
            ransom[ransomNote[i]]++;
        }
        
        for (int i = 0; i < magazine.size(); ++i) {
            mag[magazine[i]]++;
        }
        
        for (const auto& pair : ransom) {
            auto it = mag.find(pair.first);
            if (it == mag.end() || it->second < pair.second) {
                return false;
            }
        }
        
        return true;
    }
};
