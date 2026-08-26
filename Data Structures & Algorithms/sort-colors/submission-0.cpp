class Solution {
public:
    void sortColors(vector<int>& v) {

        int p1 = 0;
        int p2 = v.size() - 1;
        int main_p = 0;

        while (main_p <= p2) {

            if (v[main_p] == 0) {
                swap(v[p1], v[main_p]);
                p1++;
                main_p++;
            }
            else if (v[main_p] == 1) {
                main_p++;
            }
            else {
                swap(v[main_p], v[p2]);
                p2--;
            }
        }
    }
};