#include <iostream>
#include <list>
using namespace std;

template <typename T>
class Queue {
private:
    list<T> queue;

public:
    void enqueue(T value) {
        queue.push_back(value);
    }

    bool isEmpty() {
        return queue.empty();
    }

    T dequeue() {
        T now = queue.front();
        queue.pop_front();
        return now;
    }
    
};

int main() {
    Queue<int> q;
    q.enqueue(12);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    Queue<float> qf;
    qf.enqueue(12.3);
    
    cout << qf.dequeue() << endl;
    cout << qf.dequeue() << endl;

    // another way
    Queue<int>* q2 = new Queue<int>();
    q2->enqueue(1322);
    cout << q2->dequeue() << endl;

    return 0;
}