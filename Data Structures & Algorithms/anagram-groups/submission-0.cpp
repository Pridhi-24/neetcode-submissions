class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (int i = 0; i < strs.size(); i++) {
            
            string original = strs[i];
            string sortedWord = original;
            sort(sortedWord.begin(), sortedWord.end());
            map[sortedWord].push_back(original);
        }
        vector<vector<string>> result;
        for (auto& pair : map) {
            result.push_back(pair.second);
        }
        return result;
    }
};
