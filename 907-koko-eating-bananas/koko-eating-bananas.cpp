class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int i = 1;
        int j = *max_element(piles.begin(), piles.end());
        while(i<j){
            int mid = (i+j)/2;
            int count = 0;
            for(int i =0;i<piles.size();i++){
                count += (piles[i] + mid - 1) / mid;


            }
            if(count>h){
                i = mid+1;
            }else{
                j = mid;
            }
        }
        return i;
        
    }
};