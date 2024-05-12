// Maximum Count of Positive Integer and Negative Integer
// 


class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxp,maxn;
        maxp=0;maxn=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                maxp++;
            }
            else if(nums[i]<0)
            {
                maxn++;
            }
        }
    
        return max(maxp,maxn);
    }
};