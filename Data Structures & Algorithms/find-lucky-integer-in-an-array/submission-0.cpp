class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;

        
        for (int i=0; i<arr.size(); i++) {
            freq[arr[i]]++;
        }

        int max = -1;
        for (auto [key, val] : freq) {
            if (key == val) {
                if (key > max) {max = key;}
            }
        }

        return max;
    }
};