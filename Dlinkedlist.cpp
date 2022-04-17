#include <iostream>
#include <list>

using namespace std;

// For help in printing lists
// std::ostream& operator<<(std::ostream& ostr, const std::list<char>& list) {
//     for (const auto &i : list) {
//         ostr << ' ' << i;
//     }
//     return ostr;
// }

std::ostream& operator<<(std::ostream& ostr, const std::list<int>& list) {
    for (const auto &i : list) {
        ostr << ' ' << i;
    }
    return ostr;
}

int main() {
    list<char> letters = {'d', 'm', 'g', 'w', 't', 'f'};
    auto it = letters.begin();
    while (it != letters.end()) {
        cout << *it << " ";
        ++it;
    }
    cout << endl;
    cout << *letters.end() << endl;

    if (!letters.empty()) {
        std::cout << "The first character is '" << *letters.begin() << "'.\n";
        std::cout << "The last character is '" << letters.back() << "'.\n";        
    }

    letters.pop_front();
    letters.pop_back();

    cout << "********************************************" << endl;

    if (!letters.empty()) {
        std::cout << "The first character is '" << *letters.begin() << "'.\n";
        std::cout << "The last character is '" << letters.back() << "'.\n";        
    }
    
    std::cout << "letters contains " << letters.size() << " elements.\n";

    it = letters.begin();
    while (it != letters.end()) {
        cout << *it << " ";
        ++it;
    }
    cout << endl;
    cout << *letters.end() << endl;

    // // merge 2 lists
    // std::list<int> list1 = { 5,9,1,3,3 };
    // std::list<int> list2 = { 8,7,2,3,4,4 };

    // list1.sort();
    // list2.sort();

    // std::cout << "list1:  " << list1 << '\n';
    // std::cout << "list2:  " << list2 << '\n';

    // list1.merge(list2);
    // std::cout << "merged: " << list1 << '\n';

    return 0;
}