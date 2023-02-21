#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
using ps = pair<string, string>;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(a) (a).begin(), (a).end()
#define pb(a) push_back(a)
bool comparePairW(ps a, ps b) {return a.second == b.second ? a.first < b.first : a.second < b.second;}
bool comparePairB(ps a, ps b) {return a.second == b.second ? a.first < b.first : a.second > b.second;}

int main() {
    // white UPPER, lower number matters
    // black lower, bigger number matters
    string s, t, pos; 
    vector<ps> kingW, kingB, queenW, queenB, rookW, rookB, bishopW, bishopB, knightW, knightB, pawnW, pawnB;
    for(int i = 8; i > 0; i--) {
        cin >> s >> s; s.erase(0,1); s.erase(s.length()-1,1);
        char c = 'a';
        stringstream ss(s);
        while(getline(ss,t,'|')) {
            if(isalpha(t[1]) && islower(t[1])) { //black
                pos="";
                if(t[1] == 'p') {
                    pos.pb(c);
                    pawnB.push_back({pos, to_string(i)});
                }
                else {
                    pos.pb(toupper(t[1])); pos.pb(c);
                    if(t[1] == 'k') kingB.push_back({pos,to_string(i)});
                    if(t[1] == 'q') queenB.push_back({pos,to_string(i)});
                    if(t[1] == 'r') rookB.push_back({pos,to_string(i)});
                    if(t[1] == 'b') bishopB.push_back({pos,to_string(i)});
                    if(t[1] == 'n') knightB.push_back({pos,to_string(i)});
                }
            }
            if(isalpha(t[1]) && isupper(t[1])) { //white
                pos="";
                if(t[1] == 'P') {
                    pos.pb(c);
                    pawnW.push_back({pos,to_string(i)});
                }
                else {
                    pos.pb(t[1]); pos.pb(c);
                    if(t[1] == 'K') kingW.push_back({pos,to_string(i)});
                    if(t[1] == 'Q') queenW.push_back({pos,to_string(i)});
                    if(t[1] == 'R') rookW.push_back({pos,to_string(i)});
                    if(t[1] == 'B') bishopW.push_back({pos,to_string(i)});
                    if(t[1] == 'N') knightW.push_back({pos,to_string(i)});
                }
            }
            c++;
        }
    }
    sort(all(kingW), comparePairW); sort(all(queenW), comparePairW); sort(all(rookW), comparePairW); sort(all(bishopW), comparePairW); sort(all(knightW), comparePairW); sort(all(pawnW), comparePairW); 
    sort(all(kingB), comparePairB); sort(all(queenB), comparePairB); sort(all(rookB), comparePairB); sort(all(bishopB), comparePairB); sort(all(knightB), comparePairB); sort(all(pawnB), comparePairB); 

    vector<ps> white, black;
    // White
    for(auto a : kingW) white.pb(a);
    for(auto a : queenW) white.pb(a);
    for(auto a : rookW) white.pb(a);
    for(auto a : bishopW) white.pb(a);
    for(auto a : knightW) white.pb(a);
    for(auto a : pawnW) white.pb(a);
    // Black
    for(auto a : kingB) black.pb(a);
    for(auto a : queenB) black.pb(a);
    for(auto a : rookB) black.pb(a);
    for(auto a : bishopB) black.pb(a);
    for(auto a : knightB) black.pb(a);
    for(auto a : pawnB) black.pb(a);

    cout << "White: ";
    for(int i = 0; i < white.size(); i++) {
        if(i == white.size()-1) {cout << white[i].first << white[i].second; break;}
        cout << white[i].first << white[i].second << ",";
    } cout << endl;
    cout << "Black: ";
    for(int i = 0; i < black.size(); i++) {
        if(i == black.size()-1) {cout << black[i].first << black[i].second; break;}
        cout << black[i].first << black[i].second << ",";
    } cout << endl;
    return 0;
}