#include <iostream>
using namespace std;

int main() {
    string s; int n; cin >> s >> n;
    cout << (((s == "OCT" && n == 31) || (s == "DEC") && n == 25) ? "yup\n" : "nope\n");
    return 0;
}