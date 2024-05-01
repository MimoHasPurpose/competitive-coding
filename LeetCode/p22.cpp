// Find First and Last Position of Element in Sorted Array
// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.





class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int startingPosition=-1, endingPosition=-1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                startingPosition=i;
                break;
            }

        }
        for(int i=n-1;i>=0;i--)
        {
            if(nums[i]==target)
            {
                endingPosition=i;
                break;
            }
        }
    return {startingPosition,endingPosition};

    }
};