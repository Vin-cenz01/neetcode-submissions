class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int i : nums) {
            counts[i]++;
        }

        vector<pair<int, int>> freqPairs;
        for (auto const& [val, freq] : counts) {
            freqPairs.push_back({freq, val});
        }
        sort(freqPairs.rbegin(), freqPairs.rend());

        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(freqPairs[i].second);
        }

        return ans;
    }
};