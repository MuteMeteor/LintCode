/* 
	Implement a stack with min() function, which will return the smallest number in the stack.
	It should support push, pop and min operation all in O(1) cost.

	Example
	push(1)
	pop()   // return 1
	push(2)
	push(3)
	min()   // return 2
	push(1)
	min()   // return 1
*/


class MinStack {
private:
    stack<int> d_stk;
    stack<int> m_stk;
 
public:
    MinStack() {
        // do initialization if necessary
    }
 
    void push(int number) {
        // write your code here
        d_stk.push(number);
        if(m_stk.empty() || m_stk.top()>=number){
            m_stk.push(number);
        }
    }
 
    int pop() {
        // write your code here
        int t = -1;
        if(!d_stk.empty()){
            t = d_stk.top();
            d_stk.pop();
            if(t == m_stk.top()){
                m_stk.pop();
            }
        }
        return t;
    }
};