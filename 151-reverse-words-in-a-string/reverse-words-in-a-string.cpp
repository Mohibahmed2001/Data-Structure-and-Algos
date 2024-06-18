class Solution {
public:
    string reverseWords(string s) {
        vector<string> add;
        string word="";
        string reversed="";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (!word.empty()) {
                    add.push_back(word);
                    word = "";
                }
            } else {
                word += s[i];
            }
        }
        if (!word.empty()) {
            add.push_back(word);
        }
        for (int i = add.size() - 1; i >= 0; i--) {
            reversed += add[i];
            if (i > 0) {
                reversed += ' ';
            }
        }
        return reversed;
    }
};