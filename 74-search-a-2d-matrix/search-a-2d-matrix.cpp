class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low_row = 0;
        int high_row = matrix.size()-1;
        int row = -1;
        while(low_row<=high_row){
            int mid = (low_row+high_row)/2;
            if(matrix[mid][0]==target){
                return true;
            }else if(matrix[mid][0]<target){
                row = mid;
                low_row = mid+1;
            }else{
                high_row = mid-1;
            }
        }
        if(row==-1){
            return false;
        }
        int low_col = 0;
        int high_col = matrix[0].size()-1;
        while(low_col<=high_col){
            int mid = (low_col+high_col)/2;
            if(matrix[row][mid]==target){
                return true;
            }else if(matrix[row][mid]<target){
                low_col = mid+1;
            }else{
                high_col = mid-1;
            }
        }
        return false;

        
    }
};