class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> freq;
        unordered_map<int, int> track;
        vector<int> result;

        for (int i=0; i < nums.size(); i++) {
            track[nums[i]]++;
            
            freq.push({track[nums[i]], nums[i]});
        }

        for (int i=0; i < k; i++) {
            printf("Num: %i, %i", freq.top().second, freq.top().first);
            if (std::find(result.begin(), result.end(), freq.top().second) != result.end()) {
                k++;
            } else {
                result.push_back(freq.top().second);
            }

            freq.pop();
        }

        return result;
    }
};
