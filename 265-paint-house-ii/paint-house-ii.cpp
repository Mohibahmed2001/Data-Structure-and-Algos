class Solution {
public:
    int minCostII(vector<vector<int>>& costs) {
        
        int n = costs.size();
        if (n == 0)
            return 0;
            
        int k = costs[0].size();
        
        /** at the beginning of iteration i in the outer for loop:
            previous[j] is the cost of painting houses 0 to i-1, if we paint house i-1 with colour j
            
            in the same iteration i, the first inner for loop updates the vector 'current' such that: current[j] becomes the min cost of painting houses 0 to i, if we paint house i with colour j
        */
        
        vector<int> current(k, 0);
        vector<int> previous(k, 0);
        
        // min1 is the index of the minimum and min2 is the index of the second minimum (see later)
        int min1 = 0, min2 = 0;
        
        for (int i=0; i<n; i++) {
            
            // First inner for loop: current[j] is updated to be the min cost of painting houses 0 to i, if we paint house i with colour j 
            for (int j=0; j<k; j++) {
                // If we paint house i with colour j, we must first add its cost (costs[i][j])
                current[j] = costs[i][j];
                // We also have to add the cost of painting houses 0 to i-1. House i-1 must have been painted with a colour that is not the same as j, hence the use of min1 and min2 (if min1!=j, take the first minimum, otherwise take the second minimum)
                current[j] += min1 != j ? previous[min1] : previous[min2];

            }
        
            // Second inner for loop: find the index of the minimum and second minimum in current (i.e. minimum and second minimum costs of painting houses 0 to i), and update 'previous' to be 'current' for the next iteration
            min1 = -1, min2 = -1;
            for (int j=0; j<k; j++) {
                
                if (min1 < 0 || current[j] < current[min1]) {
                    min2 = min1;
                    min1 = j;
                }
                else if (min2 < 0 || current[j] < current[min2]) {
                    min2 = j;
                }
                
                previous[j] = current[j];
            }
        }
        return current[min1];
    }
};