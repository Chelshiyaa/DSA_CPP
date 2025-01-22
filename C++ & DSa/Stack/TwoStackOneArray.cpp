#include <iostream>
using namespace std;

class TwoStack {
    int *arr; // Pointer to array
    int cap;  // Capacity of array
    int top1, top2; // Top indices for two stacks

public:
    // Constructor
    TwoStack(int n) {
        cap = n;
        top1 = -1;
        top2 = n;
        arr = new int[n]; // Allocate memory for array
    }

    // Push element into stack1
    bool push1(int x) {
        if (top1 < top2 - 1) {
            top1++;
            arr[top1] = x;
            return true;
        }
        return false; // Stack overflow
    }

    // Push element into stack2
    bool push2(int x) {
        if (top1 < top2 - 1) {
            top2--;
            arr[top2] = x;
            return true;
        }
        return false; // Stack overflow
    }

    // Pop element from stack1
    int pop1() {
        if (top1 >= 0) {
            int x = arr[top1];
            top1--;
            return x;
        }
        return -1; // Stack underflow
    }

    // Pop element from stack2
    int pop2() {
        if (top2 < cap) {
            int x = arr[top2];
            top2++;
            return x;
        }
        return -1; // Stack underflow
    }

    // Size of stack1
    int size1() {
        return (top1 + 1);
    }

    // Size of stack2
    int size2() {
        return (cap - top2);
    }

    // Destructor to free memory
    ~TwoStack() {
        delete[] arr;
    }
};

int main() {
    TwoStack ts(10);

    ts.push1(5);
    ts.push1(10);
    ts.push2(15);
    ts.push2(20);

    cout << "Popped from stack1: " << ts.pop1() << endl;
    cout << "Popped from stack2: " << ts.pop2() << endl;

    return 0;
}
