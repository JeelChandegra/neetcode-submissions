class Solution {
public:
    int maxArea(vector<int>& nums) {
        int count =0;
    for(int i=0;i<nums.size();i++){
        int temp;
        for (int j = i; j < nums.size(); j++)
        {
             temp=min(nums[i],nums[j])*(j-i);
              count= max(temp,count);
            
        }
       
    }
    return count;
    }
};
