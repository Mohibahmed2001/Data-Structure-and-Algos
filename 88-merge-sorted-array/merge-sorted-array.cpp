class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // [1,2,3,12,0,0,0,0] m=4 a[x]
        // [8,10,12,14] n=2 b[x]
  		//first pass[1,2,3,12,0,0,0,14]
  		//second pass[1,2,3,12,0,0,12,14]
  		//third pass [1,2,3,12,0,12,12,14]
  		//fourth pass [1,2,3,12,10,12,12,14]
 		//fifth pass [1,2,3,8,10,12,12,14]
        int i = m-1;
        int k = n-1;
        int j= m+n-1;

        while(k>=0){
            if(i>=0&&nums1[i]>=nums2[k]){//need to make sure i>0
                nums1[j]=nums1[i];
                i--;
                j--;
            }else{
                nums1[j]=nums2[k];
                k--;
                j--;
            }
        }
    }
};