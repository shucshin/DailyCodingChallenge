#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        if(!n) break;
        while(n > 9) {
            string x = to_string(n); n=0;
            for(int i = 0; i < x.length(); i++) {
                n += (int)x[i]-'0';
            }

        }
        cout << n << endl;
    }
    return 0;
}