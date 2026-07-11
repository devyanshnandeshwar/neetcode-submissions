class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> seen;

        for(int num : nums) {
            seen[num]++;
        }

        for(auto id: seen) {
            if(id.second > 2) {
                return true;
            }
        }
        return false;
    }
};