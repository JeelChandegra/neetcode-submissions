class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        int p1 = 0;
        int p2 = arr.size() - 1;

        while (p1 < p2) {
            int sum = arr[p1] + arr[p2];

            if (sum == target) {
                return {p1 + 1, p2 + 1};   // Return indices (1-indexed)
            }
            else if (sum > target) {
                p2--;
            }
            else {
                p1++;
            }
        }

        return {}; // will never reach here because problem guarantees 1 solution
    }
};
