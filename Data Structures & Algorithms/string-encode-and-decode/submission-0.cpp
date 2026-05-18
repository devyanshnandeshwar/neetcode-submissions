class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for (const string& s: strs) {
            encoded += to_string(s.size()) + ':' + s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;
        while (i < s.length()) {
            // Find the delimiter
            int j = i;
            while (s[j] != ':') j++;
            int len = stoi(s.substr(i, j - i)); // length before ':'
            result.push_back(s.substr(j+1, len)); // actual word
            i = j + 1 + len;
        } 
        return result; 
    }
};
