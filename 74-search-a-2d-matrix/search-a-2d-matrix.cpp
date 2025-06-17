class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low_col = 0;
        int high_col = matrix.size()-1;
        int col =-1;
        while(low_col<=high_col){
            int mid = (low_col+high_col)/2;
            if(matrix[mid][0]==target){
                return true;
            }else if(matrix[mid][0]<target){
                col = mid;
                low_col = mid +1;
                
            }else{
                high_col = mid-1;
            }
        }
        if(col ==-1){
            return false;
        }
        int low_row =0;
        int high_row = matrix[0].size()-1;
        while(low_row<=high_row){
            int mid = (low_row+high_row)/2;
            if(matrix[col][mid]==target){
                return true;
            }else if(matrix[col][mid]<target){
                low_row=mid+1;
            }else{
                high_row = mid-1;
            }
        }
        return false;;
        
    }
};