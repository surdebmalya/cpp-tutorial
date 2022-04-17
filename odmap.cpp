#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>


using std::cout;
using std::endl;


int main() {
    std::map<std::string, int> m { {"DEBMALYA", 10}, {"AKASH", 15}, {"RAM", 20}, };

    m.insert({"NIGGAMMA", 12}); // lg n
    m.insert({"NIGGAPPU", 222}); // lg n

    for (auto i:m){
        cout << "map[" << i.first << "] = " << i.second << endl;
    }

    m.erase("NIGGAMMA");

    for (auto i:m){
        cout << "map[" << i.first << "] = " << i.second << endl;
    }

    m.clear();

    return 0;
}