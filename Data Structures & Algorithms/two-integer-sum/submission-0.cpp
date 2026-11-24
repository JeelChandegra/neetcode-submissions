

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> val;
        vector<int> fin;

        for (int i = 0; i < nums.size(); i++) {
            int res = target - nums[i];

            if (val.find(res) != val.end()) {
                return {val[res],i};
            }
            else {
                val[nums[i]] = i;
            }
        }

        return {};
    }
};
