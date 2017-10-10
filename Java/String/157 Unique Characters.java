/**
 * Implement an algorithm to determine if a string has all unique characters.
 * Example
 * Given "abc", return true.
 * Given "aab", return false.
 */

public class Solution {
    /**
     * @param str: a string
     * @return: a boolean
     */
    public boolean isUnique(String str) {
        // write your code here
        if(str == null || str.length() <= 1)
            return true;
 
        int[] count = new int[128];
 
        for(int i = 0; i < str.length(); i++){
            count[str.charAt(i)]++;
            if(count[str.charAt(i)] > 1)
                return false;
        }
 
        return true;
    }
}