class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        for(int num : nums) {
            freqMap[num]++;
        }

        int n = nums.size();
        vector<vector<int>> bucket(n+1);
        for (auto& [num,freq] : freqMap) {
            bucket[freq].push_back(num);
        }

        vector<int> result;
        for(int freq = n; freq >= 0 && result.size() < k; freq--) {
            for (int num : bucket[freq]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }
        return result;
    }
};
