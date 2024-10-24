class Solution {
public:
    bool isValid(string s) {
        vector<char>ans;
        for(int i= s.size()-1;i>=0;i--){
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                ans.push_back(s[i]);
            }else{
                if(ans.empty()){
                    return false;
                }
                char top =ans.back();
                if((s[i]=='('&&top==')')||
                ((s[i]=='{'&&top=='}')||
                (s[i]=='['&&top==']'))){
                    ans.pop_back();
                }else{
                    return false;
                }

            }

        }
        if(ans.empty()){
            return true;
        }else{
            return false;
        }
          
    }
};