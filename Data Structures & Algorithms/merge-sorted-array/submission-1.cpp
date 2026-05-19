class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> copy(m);
        for(int i = 0; i < m; i++) {
            copy[i] = nums1[i];
        };
        int i = 0; // Pointer for copy of nums1
        int j = 0; // Pointer for nums2
        int idx = 0; // Pointer for writing nums1 
        
        while(idx < m + n) {
            if (j >= n || (i < m && copy[i] <= nums2[j])) {
                nums1[idx++] = copy[i++];
            }
            else {
                nums1[idx++] = nums2[j++];
            }
        }
    }
};