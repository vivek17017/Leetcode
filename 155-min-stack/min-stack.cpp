class MinStack {
    private:
    stack<int>s;
    stack<int>minS;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())
        {
            minS.push(val);
            s.push(val);
        }
        else{



            s.push(val);
            val=std::min(val,minS.empty()?val:minS.top());
            minS.push(val);
        }
    }
    
    void pop() {
        if(!s.empty())
        {
            s.pop();
            minS.pop();
        }

    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        if(!minS.empty())
        return minS.top();
        else
        return 0;
    }
};
