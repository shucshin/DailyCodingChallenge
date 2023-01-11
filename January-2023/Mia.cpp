#include <iostream>
using namespace std;

int main() {
    /**
     * 12 or 21 highest 7 points
     * 66, 55, 44, 33, 22, 11 
     * 65, 64 ... 13
    */
    int s0,s1,r0,r1;
    while(cin >> s0 >> s1 >> r0 >> r1) {
        if(!s0 && !s1 && !r0 && !r1) break;
        int s = stoi(to_string(max(s0,s1)) + to_string(min(s0,s1)));
        int r = stoi(to_string(max(r0,r1)) + to_string(min(r0,r1)));
        int sp=0, rp=0;
        switch(s) {
            case 21:
                sp = 7;
                break;
            case 66:
                sp = 6;
                break;
            case 55:
                sp = 5;
                break;
            case 44:
                sp = 4;
                break;
            case 33:
                sp = 3;
                break;
            case 22:
                sp = 2;
                break;
            case 11:
                sp = 1;
                break;
        }
        switch(r) {
            case 21:
                rp = 7;
                break;
            case 66:
                rp = 6;
                break;
            case 55:
                rp = 5;
                break;
            case 44:
                rp = 4;
                break;
            case 33:
                rp = 3;
                break;
            case 22:
                rp = 2;
                break;
            case 11:
                rp = 1;
                break;
        }
        if(sp > rp) cout << "Player 1 wins.\n";
        else if(sp < rp) cout << "Player 2 wins.\n";
        else {
            if(s > r) cout << "Player 1 wins.\n";
            else if(s < r) cout << "Player 2 wins.\n";
            else cout << "Tie.\n";
        }
    }
    return 0;
}