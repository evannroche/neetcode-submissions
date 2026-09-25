class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxArea = 0;
        int end = heights.size() - 1;
        int start = 0;
        for (int i=0; i < heights.size(); i++) {
            int area = std::min(heights[end], heights[start]) * (end - start);
            if (area > maxArea) {maxArea = area;}
            if (heights[end] > heights[start]) {
                start ++;
            } else {
                end --;
            }
        }


        return maxArea;
    }
};
