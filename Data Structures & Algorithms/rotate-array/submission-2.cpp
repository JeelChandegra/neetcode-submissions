class Solution {
public:
    void rotate(vector<int>& v, int k) {

        int n = v.size();

        if (n == 0) return;

        k = k % n;

        reverse(v.begin(), v.end());

        reverse(v.begin(), v.begin() + k);

        reverse(v.begin() + k, v.end());
    }
};