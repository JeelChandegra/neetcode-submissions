class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        	unordered_map<string,std::vector<string> >hash;
	

	for(auto i:strs){
		   string value = i;

		 sort(value.begin(),value.end());

		 hash[value].push_back(i);

		 

	}
    std::vector<vector<string>> s;
for(auto i : hash) {
    s.push_back(i.second);
}
return s;
    }
};
