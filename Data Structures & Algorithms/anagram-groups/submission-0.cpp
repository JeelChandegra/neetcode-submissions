class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         unordered_map<string, vector<string>> mp;
        for (auto s : strs) {
        string key = s;
        sort(key.begin(), key.end());
        mp[key].push_back(s);   // group original strings
    }

   vector<vector<string>> vc;
    for (auto &p : mp) {
        vc.push_back(p.second);
    }

    return vc;
    
    }
};
