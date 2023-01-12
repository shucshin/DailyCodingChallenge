#include <iostream>
#include <vector>
using namespace std;
using vi = vector<int>;
#define pb(a) push_back(a)

int main() {
    string x0;
    while(cin >> x0) {
        if(x0 == "END") break;
        if(x0 == "1") {cout << 1 << endl; continue;}
        vi digits;
        digits.pb(-1);
        digits.pb(x0.length());
        int i = 1;
        while(digits[i] != digits[i-1]) {
            digits.pb(to_string(digits[i]).length());
            i++;
        }
        cout << i << endl;
    }
    return 0;
}