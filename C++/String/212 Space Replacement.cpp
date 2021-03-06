/**
 * Write a method to replace all spaces in a string with %20. 
 * The string is given in a characters array, 
 * you can assume it has enough space for replacement and you are given the true length of the string.
 * You code should also return the new length of the string after replacement.
 * Example
 * Given "Mr John Smith", length = 13.
 * The string after replacement should be "Mr%20John%20Smith", you need to change the string in-place and return the new length 17.
 */


class Solution {
public:
    /**
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    int replaceBlank(char string[], int length) {
        // Write your code here
        int blank_num = 0;
        for (int i = 0; i < length; i++)
            blank_num += (string[i] == ' ');
        int i = length - 1;
        int j = length + blank_num * 2 - 1;
        while (i >= 0) {
            if (string[i--] == ' ') {
                string[j - 2] = '%';
                string[j - 1] = '2';
                string[j] = '0';
                j -= 3;
            } else {
                string[j--] = string[i + 1];
            }
        }
        return length + blank_num * 2;
    }
}; 