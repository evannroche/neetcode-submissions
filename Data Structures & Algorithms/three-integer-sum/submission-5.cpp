class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;

        sort(nums.begin(), nums.end());


        
// -4 -1 -1 0 1 2
        for (int i=0; i < nums.size()-1; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            int start = i + 1;
            int end = nums.size()-1;

            bool run = true;

            while (start < end) {
                int sum = nums[i] + nums[start] + nums[end];
                if (sum == 0) {
                    output.push_back({nums[i], nums[start], nums[end]});
                    start ++;
                    end --;
                    while (start < end && nums[start] == nums[start - 1]) start++;
                    while (start < end && nums[end] == nums[end + 1]) end--;
                } else if (sum < 0 && start < nums.size()-1) {
                    start ++;
                } else if (end > start) {
                    end --;
                }
            }
                
        }

        return output;
    }
};
