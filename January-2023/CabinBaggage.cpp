#include <iostream>
#include <vector>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int allowed = 0;
    double length, width, depth, weight;
    int n; cin >> n;
    rep(i,0,n) {
        cin >> length >> width >> depth >> weight;
        if((length <= 56.00 && width <= 45.00 && depth <= 25.00 || (length+width+depth) <= 125.00) && weight <= 7.00) {
            cout << 1 << endl;
            allowed++;
        } else cout << 0 << endl;
    }
    cout << allowed << endl;
    return 0;
}