class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int sum = 1;
        output.push_back(sum);
        
        for (int i=1; i<nums.size(); i++) {
            output.push_back(sum *= nums[i-1]); 
        }

        sum = 1;
        for (int j=nums.size()-1; j>=0; j--) {
            output[j] *= sum;
            sum *= nums[j];
        }


        return output;
    }
};
