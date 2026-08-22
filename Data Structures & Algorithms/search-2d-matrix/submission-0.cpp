class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int target) {
         int i=0;int j=v[0].size()-1;
   while(i<v.size()&&j>=0){
    if (v[i][j]==target)
    {
        
        return true;
    }
    else if(v[i][j]>target){
       j--;

    }
    else{
        i++;
    }
   }
   return false;
    }
};
