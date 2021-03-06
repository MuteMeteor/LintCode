/**
 * Given two strings, write a method to decide if one is a permutation of the other.
 * Example
 * abcd is a permutation of bcad, but abbe is not a permutation of abe
 */


class Solution {
public:
    /**
     * @param A a string
     * @param B a string
     * @return a boolean
     */
    bool stringPermutation(string& A, string& B) {
        // Write your code here
        if (A.length() != B.length())
            return false;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());
        return A == B;
    }
};
