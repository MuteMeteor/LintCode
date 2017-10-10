/**
 * Given a string and an offset, rotate string by offset. (rotate from left to right)
 * Example
 * Given "abcdefg".
 * offset=0 => "abcdefg"
 * offset=1 => "gabcdef"
 * offset=2 => "fgabcde"
 * offset=3 => "efgabcd"
 */

public class Solution {
    /**
     * @param str: an array of char
     * @param offset: an integer
     * @return: nothing
     */
    public void rotateString(char[] str, int offset) {
        // write your code here
        if (offset == 0 || str == null || str.length == 0) {
            return;
        }
        offset = offset % str.length;
        swap(str, 0, str.length - 1);
        swap(str, 0, offset - 1);
        swap(str, offset, str.length - 1);
        return;
    }
    private void swap(char[] str, int start, int end) {
        while (start < end) {
            char temp = str[start];
            str[start] = str[end];
            str[end] = temp;
            start++;
            end--;
        }
        return;
    }
}