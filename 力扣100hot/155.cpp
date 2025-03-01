//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//class MinStack {
//private:
//    //int min= (1 >> 31)-1;
//    vector<int> nums;
//public:
//    MinStack() {
//        
//    }
//
//    void push(int val) {
//        nums.push_back(val);
//        if (val < min)min = val;
//    }
//
//    void pop() {
//        nums.pop_back();
//    }
//
//    int top() {
//        return nums.back();
//    }
//
//    int getMin() {
//        return min;
//    }
//};
//
///**
// * Your MinStack object will be instantiated and called as such:
// * MinStack* obj = new MinStack();
// * obj->push(val);
// * obj->pop();
// * int param_3 = obj->top();
// * int param_4 = obj->getMin();
// */