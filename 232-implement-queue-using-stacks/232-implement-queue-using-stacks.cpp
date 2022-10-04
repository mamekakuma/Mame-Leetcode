class MyQueue {
public:
    queue< int >myQueue; 
    MyQueue() {
    }
    
    void push(int x) {
     myQueue.push(x) ;   
    }
    
    int pop() {
        int fr = myQueue.front() ;
        myQueue.pop();
        return fr ;
    }
    
    int peek() {
      return myQueue.front() ;
    }
    
    bool empty() {
        return myQueue.empty();
    }
};