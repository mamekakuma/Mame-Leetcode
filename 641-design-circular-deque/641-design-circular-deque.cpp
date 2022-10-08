class MyCircularDeque {
public:
    deque<int>myCircularDeque ;
    int Max , siz = 0 ;
    MyCircularDeque(int k) {
        Max = k ;
    }
    bool insertFront(int value) {
        if(siz < Max )
        {
            myCircularDeque.push_front(value) ;
            siz++ ;
            return true ;
        }   
        return false ;
    }
    
    bool insertLast(int value) {
               if(siz < Max )
        {
            myCircularDeque.push_back(value) ;
            siz++ ;
            return true ;
        }   
        return false ;
    }
    
    bool deleteFront() {
                if(siz > 0 )
               {
            myCircularDeque.pop_front() ;
               siz-- ;
                return true ;
               }
        return false ;
    }
    
    bool deleteLast() {
        if(siz > 0 )
               {
            myCircularDeque.pop_back() ;
               siz-- ;
                return true ;
               }
        return false ;
    }
    
    int getFront() {
         if( isEmpty() )
            return -1 ;
        return myCircularDeque.front() ;
    }
    
    int getRear() {
        if( isEmpty() )
            return -1 ;
        return myCircularDeque.back() ;
    }
    
    bool isEmpty() {
        return myCircularDeque.empty();
    }
    
    bool isFull() {
        return (siz == Max) ;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */