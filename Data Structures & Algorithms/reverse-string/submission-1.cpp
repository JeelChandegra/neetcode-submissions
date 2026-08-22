class Solution {
public:
    void reverseString(vector<char>& v) {
        int p1 = 0;
        int p2 = v.size() - 1;

        while (p1 < p2) {
            swap(v[p1], v[p2]);
            p1++;
            p2--;
        }
        // no return needed, v modified in place via reference
    }
};