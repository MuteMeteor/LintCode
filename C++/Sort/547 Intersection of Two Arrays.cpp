/*
    Given two arrays, write a function to compute their intersection.
     
    Notice,
    Each element in the result must be unique.
    The result can be in any order.
     
    Example,
    Given nums1 = [1, 2, 2, 1], nums2 = [2, 2], return [2].
*/
 
class Solution {
public:
    /**
     * @param nums1 an integer array
     * @param nums2 an integer array
     * @return an integer array
     */
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // Write your code here
        vector<int> res;
        unordered_map<int, bool> mp;
        for (auto &e : nums1)
            mp[e] = true;
        for (auto &e : nums2) {
            if (mp[e])
                res.push_back(e);
            mp[e] = false;
        }
        return res;
    }
};