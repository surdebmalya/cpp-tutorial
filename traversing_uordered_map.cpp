#include <cmath>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

template <typename T>
void print_type1(T um) {
    auto it_outer = um.begin();
    while (it_outer != um.end()) {
        cout << "[" << it_outer->first << "] : ";
        auto it_inner = (it_outer->second).begin();
        while (it_inner != (it_outer->second).end()) {
            cout << "(" << it_inner->first << ", " << it_inner->second << ") ";
            it_inner++;
        }
        cout << endl;
        it_outer++;
    }
}

template <typename T>
void print_type2(T um) {
    auto it_outer = um.begin();
    while (it_outer != um.end()) {
        cout << "[" << it_outer->first << "] : ";
        auto it_inner = um[it_outer->first].begin();
        while (it_inner != um[it_outer->first].end()) {
            cout << "(" << it_inner->first << ", " << it_inner->second << ") ";
            it_inner++;
        }
        cout << endl;
        it_outer++;
    }
}

int main() {
    unordered_map<int, vector<pair<int, char>>> um;
    vector<pair<int, char>> temp1;
    temp1.push_back(make_pair(2, 'B'));
    temp1.push_back(make_pair(3, 'C'));
    um.insert(make_pair(1, temp1));
    vector<pair<int, char>> temp2;
    temp2.push_back(make_pair(4, 'D'));
    um.insert(make_pair(2, temp2));
    cout << "Type 1 printing: " << endl;
    print_type1(um);
    cout << "Type 2 printing: " << endl;
    print_type2(um);

    return 0;
}