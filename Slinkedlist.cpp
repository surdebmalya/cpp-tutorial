/**
 * front() and end() are available.
 * end() returns the iterator to the next element of the end of the list in constant time.
 * front() is also  and is equivalent to *list.begin()
 * No size() available. But has max_size() method, returns the maximum number of elements the container is able to hold due to system or library implementation limitations.
 * numbers.empty() method checks if the container has no elements, i.e. whether begin() == end().
 */

// Find all Singly and doubly list here https://algorithms.theroyakash.com/LinkedLists/stl-usage/
#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> LL = {1,2,3,4,5,6,7,8,9,0};

    LL.pop_front();
    LL.push_front(10);

    auto it = LL.begin();
    while(it != LL.end()){
        cout << *it << " ";
        ++it;
    }

    cout << endl;

    
    // if (LL.begin() == LL.end() and LL.empty()){
    //     cout << "🗿🗿" <<endl;
    // } else {
    //     cout << "🗿🗿🗿" <<endl;
    // }

    // cout << LL.max_size() << endl;

    return 0;
}