class Solution {
public:
    int trap(vector<int>& height) {
        int p1=0,p2 = height.size()-1;
        int leftMx=0,rightMx=0;
        int water=0;
        while(p1<p2){
            if(height[p1]<height[p2]){
                leftMx = max(leftMx,height[p1]);
                water+=leftMx-height[p1];
                p1++;
            }
            else {
                 rightMx = max(rightMx,height[p2]);
                water+=rightMx-height[p2];
                p2--;
            }
        }
        return water;
    }
};