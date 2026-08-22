class Solution {
public:
    int maxArea(vector<int>& v) {
        int n = v.size()-1;

	int p1=0,p2=n;
	int maxWater=0;

	while(p1<p2){
			int dis = p2-p1;
			int minValue = min(v[p1],v[p2]);
			maxWater = max(maxWater,dis*minValue); 
			
		if(v[p1]>v[p2]){
			p2--;
		
		}
		else{
			p1++;
		}
	}
	return maxWater;
        
    }
};