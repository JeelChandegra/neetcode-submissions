class Solution {
public:
    int searchInsert(vector<int>& v, int target) {
     int ans = v.size();   // default: insert at end

    for (int i = 0; i < v.size(); i++) {
        if (v[i] >= target) {
            ans = i;
            break;
        }
    }

    return ans;
    }
};