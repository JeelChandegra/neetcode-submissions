class Solution {
public:
    int maxArea(vector<int>& nums) {
        int temp = 0;
    int p1 = 0;
    int p2 = nums.size() - 1;  // fix

    while (p1 < p2) {
        int count = min(nums[p1], nums[p2]) * (p2 - p1);  // fix
        temp = max(temp, count);

        if (nums[p1] < nums[p2]) {
            p1++;
        } else {
            p2--;
        }
    }

    return temp;
    }
};
