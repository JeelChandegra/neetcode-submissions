class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
   unordered_map<string,std::vector<string> >hash;


	for(auto i:strs){
		 std::vector<int> v(26,0);

		 for(auto c: i){
		 	v[c-'a']++;
		 }

		 string key;
		 for(auto x:v){
		 	                key += to_string(x) + "#";

		 }

		 hash[key].push_back(i);

		 

	}
	std::vector<vector<string>> s;
for(auto i : hash) {
    s.push_back(i.second);
}
return s;
    }
};
