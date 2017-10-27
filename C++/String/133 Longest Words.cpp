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
public:
    /**
     * @param dictionary: a vector of strings
     * @return: a vector of strings
     */
    vector<string> longestWords(vector<string> &dictionary) {
        // write your code here
        vector<string> res;
        for (auto w : dictionary) {
            if (res.size() && w.length() > res.back().length())
                res.clear();
            if (res.empty() || w.length() == res.back().length())
                res.push_back(w);
        }
        return res;
    }
};