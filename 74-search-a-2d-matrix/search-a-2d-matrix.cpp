class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        int row =0;
        int rowhigh = matrix.size()-1;
        while(row<=rowhigh){
            int rowmedium = (row+rowhigh)/2;
            if(matrix[rowmedium][0]==target){
                return true;
            }else if(matrix[rowmedium][0]>target){
                rowhigh = rowmedium-1;
            }else{
                row = rowmedium+1;
            }
            
        }
        if (rowhigh < 0) return false;
int romedium = rowhigh;
        int col = 0;
        int colhigh = matrix[0].size()-1;
        while(col<=colhigh){
           int colmedium = (col+colhigh)/2;
            if(matrix[romedium][colmedium]==target){
                return true;
            }else if(matrix[romedium][colmedium]>=target){
                colhigh = colmedium-1;
            }else{
                col = colmedium+1;
            }

        }
        return false;
        
    }
};