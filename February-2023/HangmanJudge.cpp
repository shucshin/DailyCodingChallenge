#include <iostream>
#include <vector>
#include <set>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

void solve(int n) {
    string puzzle, guess; cin >> puzzle >> guess;
    vector<int> guessedChars(puzzle.length(), 0);
    int wrong = 0;
    rep(i,0,guess.length()) {
        bool found = false;
        rep(j,0,puzzle.length()) {
            if(puzzle[j] == guess[i]) {found = true; guessedChars[j] = 1;}
        } if(!found) wrong++;
        if(wrong >= 7) break;
    }

    bool guessed = true;
    rep(i,0,puzzle.length()) {
        if(!guessedChars[i]) guessed = false;
    }

    printf("Round %d\n", n);
    if(guessed) cout << "You win.\n";
    else {
        wrong == 7 ? printf("You lose.\n") : printf("You chickened out.\n");
    }
}

int main() {
    int n;
    while(cin >> n) {
        if(n == -1) break;
        solve(n);
    }
    return 0;
}