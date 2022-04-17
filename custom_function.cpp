#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
T max2(T a, T b) {
    return a>b?a:b;
}

int main() {
    cout << max2(10, 12) << endl;
    cout << max2(10.2, 12.3) << endl;

    return 0;
}