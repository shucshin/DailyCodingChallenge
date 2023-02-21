#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
using vc = vector<char>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)

vector<vc> chessboard;

int main() {
    // uppercase WHITE
    // lowercase black
    // K :: King, Q :: Queen, R :: Rook, B :: Bishop, N :: Knight, None :: Pawn
    string white, black, piece;
    getline(cin, white); getline(cin, black);
    white.erase(0,7);
    black.erase(0,7);
    stringstream ss(white), tt(black);
    rep(i,0,8) {
        vc row(8);
        rep(j,0,8) {
            if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)) {
                row[j] = '.';
            } else row[j] = ':';
        }
        chessboard.pb(row);
    }

    while(getline(ss,piece,',')) {
        if(piece.length() == 2) {
            chessboard[abs(piece[1]-'0'-8)][piece[0]-'a'] = 'P';
        } else {
            chessboard[abs(piece[2]-'0'-8)][piece[1]-'a'] = piece[0];
        } 
    }

    while(getline(tt,piece,',')) {
        if(piece.length() == 2) {
            chessboard[abs(piece[1]-'0'-8)][piece[0]-'a'] = 'p';
        } else {
            chessboard[abs(piece[2]-'0'-8)][piece[1]-'a'] = tolower(piece[0]);
        } 
    }

    rep(i,0,8) {
        cout << "+---+---+---+---+---+---+---+---+\n";
        cout << "|";
        rep(j,0,8) {
            // if i par && j par, ... else :::
            if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)) {cout << "." << chessboard[i][j] << ".|";}
            else {cout << ":" << chessboard[i][j] << ":|";}
        } cout << endl;
    } cout << "+---+---+---+---+---+---+---+---+\n";
    return 0;
}