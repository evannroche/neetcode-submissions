class Solution {
public:
    bool checkOpen(char c) {
        if (c == '{' || c =='(' || c == '[')
            return true;
        return false;
    }
    bool isValid(string s) {
        if (s.size() <= 1) {return false;}
        stack<char> paren;

        unordered_map<char, char> match = {
            {'{', '}'},
            {'(', ')'},
            {'[', ']'}
        };

        for (char c : s) {
            if (checkOpen(c)) {
                paren.push(c);
            } else {
                if (paren.size() == 0) {return false;}

                if (c != match[paren.top()]) {
                    return false;
                }

                paren.pop();
            }
        } 


        if (paren.size() > 0) {return false;}
        return true;
    }
};
