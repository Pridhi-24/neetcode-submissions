class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i; i< nums.size()-1; i++){
            for (int j= i+1; j < nums.size(); j++){
                if (nums[i] + nums[j] == target && i!=j){
                    return {i,j};
                }
            }
        }
    return {};
    }
};
