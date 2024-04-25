//  Largest Number At Least Twice of OthersYou are given an integer array nums where the largest integer is unique.

// Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=INT_MIN, maxIndex, size = nums.size(), i;
    for (i = 0; i < size; ++i) {
        if (nums[i] > max) {
            max = nums[i];
            maxIndex = i;
        }
    }
    for (i = 0; i < size; ++i) {
        if (i == maxIndex) {
            continue;
        }
        if (2*nums[i] > max) {
            return -1;
        }
    }
    return maxIndex;
    }
};