#include <iostream>
#include <vector>
#include <algorithm>
#include <utility> // for using 'pair'

using namespace std;

pair<int, vector<int>> someting(){
    pair<int, vector<int>> p3 = {1, {23,3,4,4,5}};
    return p3;
}


int main() {
    pair<int, float> p = {12, 24.9};
    cout<< p.first <<  " " << p.second << endl;

    pair<pair<float, pair<int, int>>, pair<int, int>> p2;
    p2.second = make_pair(1,2);
    p2.first = make_pair(420.69, make_pair(5, 2));

    cout << p2.first.first << endl;

    pair<int, vector<int>> p3 = someting();

    for (auto i:p3.second)
        cout << i << " ";

    return 0;
}