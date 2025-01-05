class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n =temperatures.size();
        vector<int> ans(n,0);
        stack<int> temps;
        for(int i =0;i<=temperatures.size()-1;i++){
            while(!temps.empty()&&temperatures[i]>temperatures[temps.top()]){
                int index = temps.top();
                temps.pop();
                ans[index]= i-index;
            }
            temps.push(i);

        }
        return ans;
    }
}; 
//75 ,71,69,72,76
// 75
// 75,71
//75,71,69
//75,71,69          next number,72
//75,71, 
//75            
// 75, 72 