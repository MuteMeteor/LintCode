/**
 * Given a string, determine if it is a palindrome, 
 * considering only alphanumeric characters and ignoring cases.
 * 
 * Example
 * "A man, a plan, a canal: Panama" is a palindrome.
 * "race a car" is not a palindrome.
 */


public class Solution {
    /**
     * @param s A string
     * @return Whether the string is a valid palindrome
     */
    public boolean isPalindrome(String s) {
        // Write your code here
        if(s == null || s.length() == 0)
            return true;
 
        s = s.toLowerCase();
        int left = 0;
        int right = s.length() - 1;
 
        while(left < right){
            while(left < right && !valid(s.charAt(left)))
                left++;
            while(left < right && !valid(s.charAt(right)))
                right--;
 
            if(left == right)
                break;
 
            if(s.charAt(left) != s.charAt(right))
                return false;
 
            left++;
            right--;
        }
 
        return true;
    }
 
    public boolean valid(char c){
        return (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
    }
 
}