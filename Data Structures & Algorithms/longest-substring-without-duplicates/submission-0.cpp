class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        int r = 0;
        int maxLength = 0;
        unordered_map<char, int> lastSeen;

        while(r < n) {
            char currentChar = s[r];
            if(lastSeen.find(currentChar) != lastSeen.end() && lastSeen[currentChar] >= l) {
                l = lastSeen[currentChar] + 1;
            }
            lastSeen[currentChar] = r;
            maxLength = max(maxLength, r - l + 1);
            r++;
        }

        return maxLength;
    }
};
