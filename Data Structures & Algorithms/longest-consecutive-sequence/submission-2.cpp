class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) {return 0;}
        // add numbers to hashmap

        sort(nums.begin(), nums.end());

        int max = 1;
        int count = 1;

        for (int i=0; i < nums.size()-1; i++) {
            printf("%i\n", nums[i]);
            if (nums[i] != nums[i+1]) {
                if (nums[i] == nums[i+1]-1) {
                    count++;
                } else {
                    count = 1;
                }
            }

            if (count > max) {max = count;}
        }

        return max;
    }
};
