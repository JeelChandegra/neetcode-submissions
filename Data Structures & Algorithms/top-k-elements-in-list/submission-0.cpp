class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       
    unordered_map<int,int> freq;

    // Count frequencies
    for (int n : nums)
        freq[n]++;

    // Max heap of (frequency, number)
    priority_queue<pair<int,int>> pq;

    for (auto &p : freq)
        pq.push({p.second, p.first});

    vector<int> result;
    while (k--) {
        result.push_back(pq.top().second);
        pq.pop();
    }

    return result;


    }
};
