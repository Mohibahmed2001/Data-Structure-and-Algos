/*class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> left_Product(n);
        vector<int> right_Product(n);
        left_Product[0] = 1;
        for(int i=1; i<n; i++){
            left_Product[i] = left_Product[i-1] * nums[i-1];
        }
        right_Product[n-1] = 1;
        for(int i=n-2; i>=0; i--){
            right_Product[i] = right_Product[i+1] * nums[i+1];
        }
        for(int i=0; i<n; i++){
            ans[i] = left_Product[i] * right_Product[i];
        }
        return ans;
    }
};*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        vector<int>left(n,1);
        vector<int>right(n,1);
        for(int i=0;i<=nums.size()-2;i++){
            left[i+1]=nums[i]*left[i];
        }
        for(int i=n-1;i>0;i--){
            right[i-1]=nums[i]*right[i];
        }
        for(int i=0;i<nums.size();i++){
            ans[i]=left[i]*right[i];
        }
        return ans;
    }
};