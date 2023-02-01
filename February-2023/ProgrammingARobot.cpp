#include <iostream>
#include <vector>
using namespace std;
using vc = vector<char>;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    char direction;
    int x0, y0, xd, yd; cin >> x0 >> y0 >> direction >> xd >> yd;
    /**
     * if x0 - xd > 0 then need to go O
     * if x0 - xd < 0 then need to go E
     * if y0 - yd > 0 then need to go S
     * if y0 - yd < 0 then need to go N
     * 
     * {N, E, S, O}
    */
    int steps = ((x0-xd) != 0 ? 1 : 0) + ((y0-yd) != 0 ? 1 : 0);
    char xc = (x0-xd > 0 ? 'O' : (x0-xd < 0 ? 'E' : 'Z'));
    char yc = (y0-yd > 0 ? 'S' : (y0-yd < 0 ? 'N' : 'Z'));

    vc v = {'N','E','S','O'};
    int di=0, xi=0, yi=0;
    rep(i,0,4) {
        if(v[i] == direction) di = i;
        if(v[i] == xc) xi = i;
        if(v[i] == yc) yi = i;
    }
    xi -= di; yi -= di;
    if(xi < 0) xi += 4;
    if(yi < 0) yi += 4;
    if (xc == 'Z') xi = 0;
    if (yc == 'Z') yi = 0;
    bool xFirst = true;
    if(xi >= yi) {xi -= yi; xFirst = false;}
    else yi -= xi;

    steps += xi + yi;
    cout << steps << endl;

    if(xFirst) {
        rep(i,0,xi) cout << "D\n";
        if(abs(x0-xd)) {
            cout << "A " << abs(x0-xd) << endl;
        }
        rep(i,0,yi) cout << "D\n";
        if(abs(y0-yd)) {
            cout << "A " << abs(y0-yd) << endl;
        }
    }
    else {
        rep(i,0,yi) cout << "D\n";
        if(abs(y0-yd)) {
            cout << "A " << abs(y0-yd) << endl;
        }
        rep(i,0,xi) cout << "D\n";
        if(abs(x0-xd)) {
            cout << "A " << abs(x0-xd) << endl;
        }
    }
    return 0;
}