#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main() {
    unordered_map<int, int> mp;
    mp.insert(make_pair(122, 32));
    mp.insert({52, 63});
    for (auto k: mp){
        cout << "Key = " << k.first << " Value = " << k.second << endl;
    }
    // cout << mp[1];

    auto it = mp.begin();
    while (it != mp.end()) {
        cout << it->first << " " << it->second << endl;
        ++it;
    }

    // empty(), size(), clear()
    
    std::unordered_map<int, std::string> c = {
        {1, "one" }, {2, "two" }, {3, "three"},
        {4, "four"}, {5, "five"}, {6, "six"  }
    };
    
    cout << c.size() << endl;
    // cout << c.contains(2) << endl; C++ 20 and up

    auto iter = c.begin();

    while (iter != c.end()) {
        if (iter->first == 3){
            // erase returns Iterator following the last removed element
            iter = c.erase(iter);
        }

        iter++;
    }

    iter = c.begin();
    while (iter != c.end()) {
        cout << iter->first << " " << iter->second << endl;
        ++iter;
    }

    

    return 0;
}