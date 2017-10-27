/**
 * Given a string and an offset, rotate string by offset. (rotate from left to right)
 * Example
 * Given "abcdefg".
 * offset=0 => "abcdefg"
 * offset=1 => "gabcdef"
 * offset=2 => "fgabcde"
 * offset=3 => "efgabcd"
 */

class Solution {
public:
  /**
     * param A: A string
     * param offset: Rotate string with offset.
     * return: Rotated string.
     */
    string rotateString(string A, int offset) {
        // wirte your code here
        string s;
        int sz = A.length();
        if(sz == 0)
            return A;
        offset = offset%sz;
        for(int i = sz- offset; i<sz; i++){
            s.push_back(A[i]);
        }
        for(int i =0; i<sz-offset; i++){
            s.push_back(A[i]);
        }
        return s;
    }
};