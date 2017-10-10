/**
 * The count-and-say sequence is the sequence of integers beginning as follows:
 * 1, 11, 21, 1211, 111221, ...
 * 1 is read off as "one 1" or 11.
 * 11 is read off as "two 1s" or 21.
 * 21 is read off as "one 2, then one 1" or 1211.
 * Given an integer n, generate the nth sequence.
 * 
 * Example
 * Given n = 5, return "111221".
 */


public class Solution {
    /**
     * @param n the nth
     * @return the nth sequence
     */
    public String countAndSay(int n) {
        // Write your code here
        if(n < 0)
            return "";
 
        if(n == 1)
            return "1";
 
        StringBuilder next = new StringBuilder();
        String curr = "1";
 
        for(int i = 1; i < n; i++){
            int p = 1;
            char c = curr.charAt(0);
            int num = 1;
            while(p <= curr.length()){
                while(p < curr.length() && curr.charAt(p) == c){
                    p++;
                    num++;
                }
                next.append(num).append(c);
 
                if(p == curr.length())
                    break;
 
                c = curr.charAt(p);
                num = 1;
                p++;
            }
            curr = next.toString();
            next = new StringBuilder();
        }
 
        return curr;
    }
}