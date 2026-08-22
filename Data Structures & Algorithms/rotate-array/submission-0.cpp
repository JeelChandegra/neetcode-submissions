class Solution {
public:
    void rotate(vector<int>& v, int k) {
        int n = v.size();
        k = k % n;  // handle k > n

        // 1. reverse whole array
        reverse(v.begin(), v.end());

        reverse(v.begin(), v.begin() + k);

       
        reverse(v.begin() + k, v.end());
    }
};
