class Solution {
public:
    bool isAnagram(string s, string t) {
       unordered_map<char, int> second;
        unordered_map<char, int> first;


        if(s.length()!=t.length()){
            return false;
        }

        for (auto i : s) {
            first[i]++;
        }

        for (auto i : t) {
            second[i]++;
        }

        for (auto i : first) {
            if (second[i.first] != i.second) {
               
                return false;
            }
        }

       
        return true;
    }
};
