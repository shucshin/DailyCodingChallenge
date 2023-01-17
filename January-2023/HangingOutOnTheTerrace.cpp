#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int limit, events; cin >> limit >> events;
    string io; int ppl, room = 0, denied = 0;
    rep(i,0,events) {
        cin >> io >> ppl;
        if(io == "leave") {
            room -= ppl;
        }
        if(io == "enter") {
            if(room+ppl <= limit) {
                room += ppl;
            }
            else {
                denied++;
            }
        }
    }
    cout << denied << endl;
    return 0;
}