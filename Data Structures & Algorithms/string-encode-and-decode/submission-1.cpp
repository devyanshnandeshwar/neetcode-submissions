class Solution {
public:
    //  Naive Approach
    string encode(vector<string>& strs) {
        string res = "";

        for (string s: strs) {
            res += s + "#";
        }

        return res;
    }

    vector<string> decode(string s) {
        
        vector<string> res;

        string temp = "";

        for(char c : s) {
            if (c == '#') {
                res.push_back(temp);
                temp = "";
            }
            else {
                temp += c;
            }
        }

        return res; 
    }
};
