class MinStack {
    stack<long long> st;
    long long minVal;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if (st.empty()) {
            st.push(0);
            minVal = val;
        }
        else {
            long long diff = (long long)val - minVal;
            st.push(diff);
            if (diff < 0) minVal = val;
        }
    }
    
    void pop() {
        if (st.empty()) return;

        long long topDiff = st.top();
        st.pop();

        if (topDiff < 0) {
            minVal = minVal - topDiff;
        }
    }
    
    int top() {
        long long topDiff = st.top();
        if (topDiff >= 0) {
            return (int)(minVal + topDiff);
        }
        else {
            return (int)(minVal);
        }
    }
    
    int getMin() {
        return (int)minVal;
    }
};
