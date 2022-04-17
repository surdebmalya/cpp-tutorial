#include <iostream>
#include <vector>

using std::cout;
using std::endl;

int main() {
    std::vector<int> v;
    // push_back(12), pop_back()
    // .back()

    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(18);
    // v.back();
    
    for(int i = 0; i<v.size(); ++i){
        cout << v[i] << " ";
    }

    cout << endl;

    // 1. one way to traverse iterator usage

    std::vector<int>::iterator it;
    // starting pointer
    it = v.begin();

    // (end + 1)th pointer
    std::vector<int>::iterator itend = v.end();

    while (it != v.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    cout << *it << endl;

    // 2. one way to traverse
    
    for (it=v.begin(); it!=v.end(); ++it) {
        cout<< *it <<" ";
    }
    cout << *it << endl;

    // 3. one more way of traversal
    for (int i:v){
        cout << i << " ";
    }

    cout << "\n";

    // alternative to 3
    for (auto i: v){
        cout << i << " ";
    }

    cout << endl;

    auto newit = v.begin();

    cout << *newit << endl;

    return 0;

}