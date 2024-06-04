class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       map<int,int>map;
       int count =0;
       for(auto element:nums){
        map[element]++;
       }
       for(auto element:map){
            if(element.second>=1){
                nums[count]=element.first;
                count++;
            }
       }
       return count;
    }
};