#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n; cin >> n;
    while(n--) {
        int g, first, current; cin >> g;
        cin >> first;
        bool king = false;
        rep(i,1,g) {
            cin >> current;
            if(!king) {
                if(++first != current) {
                    cout << i+1 << endl;
                    king = true;
                }
            }
        }
    }
    return 0;
}