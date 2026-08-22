class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         unordered_set<int> s(nums.begin(), nums.end());
    int maxLen = 0;

    for (int num : s) {
        // Only start from the beginning of a sequence
        if (s.find(num-1) == s.end()) {
            int current = num;
            int len = 1;
            while (s.find(current + 1) != s.end()) {
                current++;
                len++;
            }
            maxLen = max(maxLen, len);
        }
    }
    return maxLen;
    }
};
