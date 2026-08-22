class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {
       
            unordered_map<int,int>mp;
            for(int i=0;i<v.size();i++){
                    if(mp.count(v[i])){
                            if(i-mp[v[i]]<=k){
                                return true;
                            }
                    }
                    mp[v[i]]=i;
            }

   return false;
    }
};