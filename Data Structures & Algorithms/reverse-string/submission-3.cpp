class Solution {
private:
    void reverse(vector<char>& s, int l, int r) {
        if (l < r) {
            reverse(s, l + 1, r - 1);
            swap(s[l], s[r]);
        }
    }
public:
    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size() - 1);
    }
};