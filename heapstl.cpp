#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

template <typename T>
void print_queue(T q) { // NB: pass by value so the print uses a copy
    while (!q.empty()) {
        std::cout << q.top() << ' ';
        q.pop();
    }
    std::cout << '\n';
}

int main() {
    // default max heap

    priority_queue<int> pq;
    pq.push(10);
    pq.push(1);
    pq.push(15);
    pq.push(13);
    pq.push(21);
    pq.push(2);
    pq.push(11);

    print_queue(pq);

    cout << pq.top() << "\n";
    cout << "Size of Heap: " << pq.size() << endl;

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    cout << "Size after popping: " << pq.size() << endl;

    cout << "&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&" << endl;

    // f(l, r)

    // Min Heap implementation
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(1);
    minHeap.push(15);
    minHeap.push(13);
    minHeap.push(21);
    minHeap.push(2);
    minHeap.push(11);

    print_queue(minHeap);
    cout<< minHeap.top() << endl;
    
    return 0;
}