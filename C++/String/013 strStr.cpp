/**
 * For a given source string and a target string, 
 * you should output the first index(from 0) of target string in source string.
 * If target does not exist in source, just return -1.
 * Example
 * If source = "source" and target = "target", return -1.
 * If source = "abcdabcdefg" and target = "bcd", return 1.
 */

class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
        // write your code here
        if(source == NULL || target == NULL)
            return -1;
        if(target[0] == '\0')
            return 0;
        int start = 0;
        while( source[start] != '\0'){
            int t = 0;
            int s = 0;
            while(source[start+s] != '\0' && target[t] != '\0' && source[start+s] == target[t]){
                s++;
                t++;
            }
            if(target[t] == '\0')
                return start;
            start++;
        }
        return -1;
    }
};