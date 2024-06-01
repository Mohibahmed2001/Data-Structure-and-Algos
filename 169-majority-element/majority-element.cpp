#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }
        for (auto entry : counts) {
            if (entry.second > nums.size() / 2)
                return entry.first;
        }
        return 0; // This should never be reached if there is always a majority element
    }
};
