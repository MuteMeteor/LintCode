/**
 * Given two sorted integer arrays A and B, merge B into A as one sorted array.
 * Example
 * A = [1, 2, 3, empty, empty], B = [4, 5]
 * After merge, A will be filled as [1, 2, 3, 4, 5]
 */

class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements, 
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        int k = m + n - 1;
        m--;
        n--;
        while(m >= 0 && n >= 0)
            A[k--] = A[m]>B[n]?A[m--]:B[n--];
        
        while(n >= 0)
            A[k--] = B[n--];
    }
};