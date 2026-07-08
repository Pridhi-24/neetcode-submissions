class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> count;
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++; 
        }
        vector<vector<int>> buckets(nums.size() + 1);
        for (auto& pair : count) {
            int number = pair.first;
            int freq = pair.second;
            buckets[freq].push_back(number);
        }
        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0; i--) {
            for (int j = 0; j < buckets[i].size(); j++) {
                result.push_back(buckets[i][j]);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        return result;   
    }
};
