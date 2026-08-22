class Solution {
public:
    int removeDuplicates(vector<int>& v) {
    int k = 1;  

    for (int i = 1; i < v.size(); i++) {
        if (v[i] != v[i - 1]) {
            v[k] = v[i];
            k++;
        }
    }

    return k;
    }
};