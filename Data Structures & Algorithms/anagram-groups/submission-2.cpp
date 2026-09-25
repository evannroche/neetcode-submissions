class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagram;
        vector<vector<string>> output;

        for (string str : strs) {
            string orig = str;
            sort(str.begin(), str.end());
            anagram[str].push_back(orig);
        }

        for (const auto& [key, val] : anagram) {
            output.push_back(val);
        }

        // for (string s : strs) {
        //     sort(s.begin(), s.end());
        //     if (anagram.count(s)) {
        //         if (find(output.begin(), output.end(), anagram[s]) == output.end()) {
        //             output.push_back(anagram[s]);
        //         }
        //     }
        // }

        return output;
    }
};
