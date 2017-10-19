/**
 * Given a dictionary, find all of the longest words in the dictionary.
 * Example
 * Given
 * {
 *   "dog",
 *   "google",
 *  "facebook",
 *   "internationalization",
 *   "blabla"
 * }
 * the longest words are(is) ["internationalization"].
 * 
 * Given
 * {
 *   "like",
 *   "love",
 *   "hate",
 *   "yes"
 * }
 * the longest words are ["like", "love", "hate"].
 */

class Solution {
    /**
     * @param dictionary: an array of strings
     * @return: an arraylist of strings
     */
    ArrayList<String> longestWords(String[] dictionary) {
        // write your code here
        ArrayList<String> res = new ArrayList<String>();
 
        if(dictionary == null || dictionary.length == 0)
            return res;
 
        int max = 0;
 
        for(String s: dictionary){
            if(s.length() > max){
                max = s.length();
                res.clear();
                res.add(s);
            }
            else if(s.length() == max){
                res.add(s);
            }
        }
 
        return res;
    }
};