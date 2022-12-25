#include <iostream>
using namespace std;

int main() {
    string s; cin >> s;
    cout << s.substr(0, s.length()-1) << s.substr(1,s.length()-2) << "y" << endl;
    return 0;
}