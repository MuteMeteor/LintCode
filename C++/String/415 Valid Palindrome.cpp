/**
 * Given a string, determine if it is a palindrome, 
 * considering only alphanumeric characters and ignoring cases.
 * 
 * Example
 * "A man, a plan, a canal: Panama" is a palindrome.
 * "race a car" is not a palindrome.
 */


class Solution {
public:
    /**
     * @param s A string
     * @return Whether the string is a valid palindrome
     */
    bool isPalindrome(string& s) {
        // Write your code here
        int N = s.length();
        int i = 0, j = N - 1;
        while (i < j) {
            if (!is_alnum(s[i])) {
                i++;
            } else if (!is_alnum(s[j])) {
                j--;
            } else if (is_same_alnum(s[i], s[j])) {
                i++;
                j--;
            } else {
                return false;
            }
        }
        return true;
    }
 
    bool is_alnum(char &c) {
        return ('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z') || ('0' <= c && c <= '9');  
    }
 
    bool is_same_alnum(char &c1, char &c2) {
        int diff = c1 >= c2 ? c1 - c2 : c2 - c1; 
        return diff == 0 || diff == 'a' - 'A';  
    }
};