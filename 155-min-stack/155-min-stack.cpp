class MinStack {
public:
     stack<int>minStack ;
    unordered_map< int , int > inStack ;
    priority_queue<int , vector<int> , greater<int> >Min ;
    MinStack() {
    }
    void push(int val) {
minStack.push(val);
        Min.push(val) ;
        inStack[val] ++ ;
        }
    void pop() {
        inStack[minStack.top()] -- ;
            minStack.pop() ;
}
    int top() {
        return minStack.top();
    }
    int getMin() {
        while( inStack[Min.top()] < 1 )
            {
            Min.pop();
            }
        return Min.top();      
    }     
};