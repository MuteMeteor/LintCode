/**
 * Given two strings, write a method to decide if one is a permutation of the other.
 * Example
 * abcd is a permutation of bcad, but abbe is not a permutation of abe
 */




public class Solution {
    /**
     * @param A a string
     * @param B a string
     * @return a boolean
     */
    public boolean stringPermutation(String A, String B) {
        // Write your code here
        if(A == null && B == null)
            return true;
        if(A == null || B == null)
            return false;
 
        int[] count = new int[128];
 
        if(A.length() != B.length())
            return false;
 
        for(int i = 0; i < A.length(); i++)
            count[(int) A.charAt(i)]++;
        for(int i = 0; i < B.length(); i++)
            count[(int) B.charAt(i)]--;
 
        for(int i = 0; i < 128; i++)
            if(count[i] != 0)
                return false;
 
        return true;
    }
}
