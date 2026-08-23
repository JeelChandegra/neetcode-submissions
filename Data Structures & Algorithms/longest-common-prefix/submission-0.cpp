class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
int n = s[0].size();

for(auto i : s) {
    n = min(n, (int)i.size());
}

int count=0;
string ans="";
for(int i=0;i<n;i++){
	for(int j=0;j<s.size();j++){
			if(s[0][i]!=s[j][i]){
			
				return ans;
			}

	}
	ans+=s[0][i];
}
return ans;
    }
};