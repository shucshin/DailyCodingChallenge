// FEN :: Forsyth-Edwards Notation
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
using vc = vector<char>;
using vvc = vector<vc>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)

// r rook n knight b bishop p pawn q queen k king
void move(char c, int x, int y, vvc &chessboard) {
    int i = x, j = y;
    // pawn-black
    if(c == 'p') {
        i = x, j = y;
        //down-left
        if(i < 7 && j > 0 && isdigit(chessboard[i+1][j-1])) {
            chessboard[i+1][j-1] = '1';
        }
        //down-right
        if(i < 7 && j < 7 && isdigit(chessboard[i+1][j+1])) {
            chessboard[i+1][j+1] = '1';
        }
    }
    // pawn-white
    if(c == 'P') {
        i = x, j = y;
        // up-left
        if(i > 0 && j > 0 && isdigit(chessboard[i-1][j-1])) {
            chessboard[i-1][j-1] = '1';
        }
        // up-right
        if(i > 0 && j < 7 && isdigit(chessboard[i-1][j+1])) {
            chessboard[i-1][j+1] = '1';
        }
    }
    // rook-queen
    if(c == 'r' || c == 'R' || c == 'q' || c == 'Q') {
        i = x;
        //up
        while(i > 0 && isdigit(chessboard[i-1][j])) {
            chessboard[i-1][j] = '1';
            i--;
        }
        //down 
        i = x;
        while(i < 7 && isdigit(chessboard[i+1][j])) {
            chessboard[i+1][j] = '1';
            i++;
        }
        //left
        i = x, j = y;
        while(j > 0 && isdigit(chessboard[i][j-1])) {
            chessboard[i][j-1] = '1';
            j--;
        }
        //right
        j = y;
        while(j < 7 && isdigit(chessboard[i][j+1])) {
            chessboard[i][j+1] = '1';
            j++;
        }
    }
    // bishop-queen
    if(c == 'b' || c == 'B' || c == 'q' || c == 'Q') {
        //left-up
        i = x, j = y;
        while(i > 0 && j > 0 && isdigit(chessboard[i-1][j-1])) {
            chessboard[i-1][j-1] = '1';
            i--; j--;
        }
        //left-down
        i = x, j = y;
        while(i < 7 && j > 0 && isdigit(chessboard[i+1][j-1])) {
            chessboard[i+1][j-1] = '1';
            i++; j--;
        }
        //right-up
        i = x, j = y;
        while(i > 0 && j < 7 && isdigit(chessboard[i-1][j+1])) {
            chessboard[i-1][j+1] = '1';
            i--; j++;
        }
        //right-down
        i = x, j = y;
        while(i < 7 && j < 7 && isdigit(chessboard[i+1][j+1])) {
            chessboard[i+1][j+1] = '1';
            i++; j++;
        }
    }
    // knight
    if(c == 'n' || c == 'N') {
        i = x, j = y;
        //up-2
        if(i-2 >= 0) {
            //left
            if(j > 0 && isdigit(chessboard[i-2][j-1])) {
                chessboard[i-2][j-1] = '1';
            }
            //right
            if(j < 7 && isdigit(chessboard[i-2][j+1])) {
                chessboard[i-2][j+1] = '1';
            }
        }
        //down-2
        if(i+2 <= 7) {
            //left
            if(j > 0 && isdigit(chessboard[i+2][j-1])) {
                chessboard[i+2][j-1] = '1';
            }
            //right
            if(j < 7 && isdigit(chessboard[i+2][j+1])) {
                chessboard[i+2][j+1] = '1';
            }
        }
        //left-2
        if(j-2 >= 0) {
            //up
            if(i > 0 && isdigit(chessboard[i-1][j-2])) {
                chessboard[i-1][j-2] = '1';
            }
            //down
            if(i < 7 && isdigit(chessboard[i+1][j-2])) {
                chessboard[i+1][j-2] = '1';
            }
        }
        //right-2
        if(j+2 <= 7) {
            //up
            if(i > 0 && isdigit(chessboard[i-1][j+2])) {
                chessboard[i-1][j+2] = '1';
            }
            //down
            if(i < 7 && isdigit(chessboard[i+1][j+2])) {
                chessboard[i+1][j+2] = '1';
            }
        }
    }
    // king
    if(c == 'k' || c == 'K') {
        i = x, j = y;
        //up
        if(i > 0 && isdigit(chessboard[i-1][j])) chessboard[i-1][j] = '1';
        //down
        if(i < 7 && isdigit(chessboard[i+1][j])) chessboard[i+1][j] = '1';
        //left
        if(j > 0 && isdigit(chessboard[i][j-1])) chessboard[i][j-1] = '1';
        //right
        if(j < 7 && isdigit(chessboard[i][j+1])) chessboard[i][j+1] = '1';
        // up-left
        if(i > 0 && j > 0 && isdigit(chessboard[i-1][j-1])) {
            chessboard[i-1][j-1] = '1';
        }
        // up-right
        if(i > 0 && j < 7 && isdigit(chessboard[i-1][j+1])) {
            chessboard[i-1][j+1] = '1';
        }
        //down-left
        if(i < 7 && j > 0 && isdigit(chessboard[i+1][j-1])) {
            chessboard[i+1][j-1] = '1';
        }
        //down-right
        if(i < 7 && j < 7 && isdigit(chessboard[i+1][j+1])) {
            chessboard[i+1][j+1] = '1';
        }
    }
}

// top to bottom, top black lowercase, bottom white uppercase
void solve(string s) {
    string t;
    stringstream ss(s);
    vvc chessboard;
    rep(i,0,8) {
        vc row;
        rep(j,0,8)
            row.pb('0');
        chessboard.pb(row);
    }

    int y = 0;
    while(getline(ss,t,'/')) {
        int x = 0; 
        rep(i,0,t.size()) {
            if(isdigit(t[i])) {
                x += ((int)t[i]-'0');
            }
            else {
                chessboard[y][x] = t[i];
                x++;
            }
        }
        y++;
    }

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(!isdigit(chessboard[i][j])) move(chessboard[i][j], i, j, chessboard);
        }
    }

    int ans = 0;
    rep(i,0,8) {
        rep(j,0,8) {
            if(chessboard[i][j] == '0') ans++;
        }
    }
    cout << ans << endl;
}

int main() {
    string s;
    while(cin >> s) solve(s);
    return 0;
}