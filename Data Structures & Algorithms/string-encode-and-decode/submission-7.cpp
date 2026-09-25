#include <cstring>

class Solution {
public:

    string encode(vector<string>& strs) {
        string out = "";
        for (string s : strs) {
            out += to_string(s.size()) + '#' + s;
        }

        return out;
    }

    vector<string> decode(string s) {
        vector<string> output;
        string size = "";
        printf("%s\n", s.c_str());
        
        for (int i=0; i < s.size(); i++) {
            size = "";

            while (s[i] != '#' && i < s.size()) {
                size += s[i];
                i++;
            }

            printf("%i, %i, %i\n", i, stoi(size), s.size());

            if (i+1+stoi(size) <= s.size()) {
                output.push_back(s.substr(i+1, stoi(size)));
            }

            i += stoi(size);

        }

        return output;
    }
};
