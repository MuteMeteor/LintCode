/*
	Find K-th largest element in an array.

	Example
	In array [9,3,2,4,8], the 3rd largest element is 4.
	In array [1,2,3,4,5], the 1st largest element is 5, 2nd largest element is 4, 3rd largest element is 3 and etc.
*/

class Solution {
public:
    int partitionArray(vector<int> &nums, int k) {
        // write your code here
        int lo = 0;
        int hi = nums.size() - 1;
        
        while(lo <= hi){
            if(nums[lo] < k)
                lo++;
            else
                swap(nums[lo], nums[hi--]);
        }
        return lo;
    }
};