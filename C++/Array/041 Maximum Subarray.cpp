/**
 * Given an array of integers, find a contiguous subarray which has the largest sum.
 * Example
 * Given the array [−2,2,−3,4,−1,2,1,−5,3], 
 * the contiguous subarray [4,−1,2,1] has the largest sum = 6.
 */


class Solution {
public:    
    /**
     * @param nums: A list of integers
     * @return: A integer indicate the sum of max subarray
     */
    int max(int a, int b)
    {
        return a > b ? a : b;
    }
    int maxSubArray(vector<int> nums) {
        // write your code here
        if(nums.empty())
            return NULL;
        int maxCur = nums[0];
        int maxSoFar = nums[0];
        vector<int>::size_type len = nums.size();
        for(vector<int>::size_type i = 1; i < len; i++)
        {
            maxSoFar = max(maxSoFar , maxCur);
        }
        return maxSoFar;
    }
};