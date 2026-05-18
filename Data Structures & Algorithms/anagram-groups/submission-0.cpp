class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (const string& word : strs) {
            string sortedWord = word;
            sort(sortedWord.begin(), sortedWord.end()); // sort to get the anagram key 
            anagramGroups[sortedWord].push_back(word); // group by sorted key 
        }

        // Collect all anagram groups into a result vector
        vector<vector<string>> result;
        for (auto& pair : anagramGroups) {
            result.push_back(move(pair.second));
        }

        return result;
    }
};
