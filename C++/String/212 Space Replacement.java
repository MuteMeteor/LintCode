/**
 * Write a method to replace all spaces in a string with %20. 
 * The string is given in a characters array, 
 * you can assume it has enough space for replacement and you are given the true length of the string.
 * You code should also return the new length of the string after replacement.
 * Example
 * Given "Mr John Smith", length = 13.
 * The string after replacement should be "Mr%20John%20Smith", you need to change the string in-place and return the new length 17.
 */


public class Solution {
    /**
     * @param string: An array of Char
     * @param length: The true length of the string
     * @return: The true length of new string
     */
    public int replaceBlank(char[] string, int length) {
        // Write your code here
 
        int count = 0;
 
        for(int i = 0; i < length; i++){
            if(string[i] == ' ')
                count++;
        }
 
        int res = length + count * 2;
        int j = res - 1;
 
        for(int i = length - 1; i >= 0; i--){
            if(string[i] != ' '){
                string[j--] = string[i];
            }
            else{
                string[j--] = '0';
                string[j--] = '2';
                string[j--] = '%';
            }
        }
 
        return res;
    }
}