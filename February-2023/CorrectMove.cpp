#include <iostream>
#include <set>
using namespace std;

set<int> king_set, queen_set;

void king_moves(int king) {
    if(king%8!=0) king_set.insert(king-1); // left
    if((king+1)%8!=0) king_set.insert(king+1); // right
    if(king > 7) king_set.insert(king-8); // up
    if(king < 56) king_set.insert(king+8); // down
}

void queen_moves(int queen, int king) {
    int i = queen; //left
    while(((--i)+1)%8 != 0) {
        if(i == king) break;
        queen_set.insert(i);
    }
    i = queen; // right
    while((++i)%8 != 0) {
        if(i == king) break;
        queen_set.insert(i);
    }
    i = queen; // up
    while((i-=8) > -1) {
        if(i == king) break;
        queen_set.insert(i);
    }
    i = queen; // down
    while((i+=8) < 64) {
        if(i == king) break;
        queen_set.insert(i);
    }
}

int main() {
    int king, queen, move;
    while(cin >> king >> queen >> move) {
        if(king==queen) {cout << "Illegal state\n"; continue;}
        king_moves(king);
        queen_moves(queen, king);
        if(!queen_set.count(move)) printf("Illegal move\n");
        else if(king_set.count(move)) printf("Move not allowed\n");
        else {
            queen_set.clear();
            queen_moves(move, king);
            bool locked = true;
            for(auto a:king_set) {
                if(!queen_set.count(a)) locked = false;
            }
            locked ? printf("Stop\n") : printf("Continue\n");
        }
        king_set.clear(); queen_set.clear();
    }
    return 0;
}