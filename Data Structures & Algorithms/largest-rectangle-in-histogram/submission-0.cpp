class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n), right(n);
        stack<int> st;

        // Find Previous Smaller Element (PSE) for each bar 
        for (int i = 0; i < n; i++) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if(st.empty()) {
                left[i] = -1;
            }
            else {
                left[i] = st.top();
            }
            st.push(i);
        }

        // Clear stack before computing NSE
        while (!st.empty()) {
            st.pop();
        }

        // Find Next Smaller Element (NSE) for each bar
        for (int i = n - 1; i >= 0; i--) {
            while(!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            if (st.empty()) {
                right[i] = n;
            }
            else {
                right[i] = st.top();
            }
            st.push(i);
        }

        // Compute the maximum area
        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int width = right[i] - left[i] - 1;
            int area = heights[i] * width;
            if (area > maxArea) {
                maxArea = area;
            }
        }

        return maxArea;
    }
};
