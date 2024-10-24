class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right = height.size()-1;
        int max =0;
        while(left<right){
            if(height[left]>height[right]){
                if( max <= height[right]*(right-left)){
                    max = height[right]*(right-left);
                }
                right--;
            }else{
                if(max <= height[left]*(right-left)){
                    max = height[left]*(right-left);
                }
                left++;
            }
        }
        return max;
    }
};