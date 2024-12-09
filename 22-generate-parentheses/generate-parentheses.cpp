class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(0,0,"",n,res);
        return res;
        
    }
    void dfs(int openp, int closep, string s, int n, vector<string>&res){
        if(openp==closep && openp+closep==n*2){
            res.push_back(s);
            return;
        }
        if(openp<n){
            dfs(openp+1,closep,s+"(",n,res);
        }
        if(closep<openp){
             dfs(openp,closep+1,s+")",n,res);
        }
    }
};