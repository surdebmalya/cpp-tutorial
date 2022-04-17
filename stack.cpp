#include <iostream>
#include <vector>

using namespace std;

class Stack {
private:
    vector<int> _stack;

public:
    Stack() {
        _stack = {};
    }

    void push(int value) {
        _stack.push_back(value);
    }

    bool isEmpty() {
        return _stack.size() == 0;
    }

    int pop() {
        if (isEmpty()) {
            return -1;
        }
        int last_ele = _stack.back();
        _stack.pop_back();
        return last_ele;
    }

    void show() {
        auto it = _stack.begin();
        while (it != _stack.end()) {
            cout << *it << " ";
            it++;
        }

        cout << endl;
    }

};


int main() {
    Stack* stack = new Stack();

    stack->push(1);
    stack->push(2);
    stack->push(3);
    stack->push(4);
    cout << stack->pop() << endl;
    stack->show();

    delete(stack); // if new is used to allocate the element, then delete
    // if malloc then free

    return 0;
}