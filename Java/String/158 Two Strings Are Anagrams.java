/**
 * Write a method anagram(s,t) to decide if two strings are anagrams or not.
 * What is Anagram?
 * - Two strings are anagram if they can be the same after change the order of characters.
 * Example
 * Given s = "abcd", t = "dcab", return true.
 * Given s = "ab", t = "ab", return true.
 * Given s = "ab", t = "ac", return false.
 */

public class Solution {
    /**
     * @param : The first string
     * @param : The second string
     * @return true or false
     */
    public boolean anagram(String s, String t) {
        // write your code here
        if(s == null && t == null)
            return true;
        if(s == null || t == null)
            return false;
 
        int[] count = new int[128];
 
        for(int i = 0; i < s.length(); i++)
            count[s.charAt(i)]++;
        for(int i = 0; i < t.length(); i++)
            count[t.charAt(i)]--;
 
        for(int i = 0; i < 128; i++)
            if(count[i] != 0)
                return false;
 
        return true;
    }
}