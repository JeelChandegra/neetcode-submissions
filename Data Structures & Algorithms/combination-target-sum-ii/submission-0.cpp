#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(candidates.begin(), candidates.end()); // sort to handle duplicates
        dfs(candidates, target, 0, 0, temp, result);
        return result;
    }

private:
    void dfs(vector<int>& candidates, int target, int index, int sum, 
             vector<int>& temp, vector<vector<int>>& result) {
        if (sum == target) {
            result.push_back(temp);
            return;
        }
        if (sum > target) return;

        for (int i = index; i < candidates.size(); i++) {
            // skip duplicates
            if (i > index && candidates[i] == candidates[i - 1]) continue;

            temp.push_back(candidates[i]);
            dfs(candidates, target, i + 1, sum + candidates[i], temp, result); // i+1 because each number used once
            temp.pop_back(); // backtrack
        }
    }
};


