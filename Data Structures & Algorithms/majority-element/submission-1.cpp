class Solution {
public:
    int majorityElement(vector<int>& v) {


        int count = 0;
int num = 0;

for (int i = 0; i < v.size(); i++) {

    if (count == 0) {
        num = v[i];
    }

    if (num == v[i]) {
        count++;
    } else {
        count--;
    }
}
return num;
        
    }
};