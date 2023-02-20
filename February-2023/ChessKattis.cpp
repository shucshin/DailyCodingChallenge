#include <iostream>
#include <stack>
#include <queue>
using namespace std;
using pi = pair<int, int>;

char get_color(char c, int i) {
    char color; ((((int)c-65)%2 && i%2) || !(((int)c-65)%2 || i%2)) ? color = 'W' : color = 'B';
    return color;
}

void solve() {
    char x, y; int xi, yi; cin >> x >> xi >> y >> yi;
    char color_x = get_color(x,xi), color_y = get_color(y,yi);
    if(color_x != color_y) {printf("Impossible\n"); return;}
    int distance_x = (int)y-(int)x, distance_y = yi-xi;
    stack<pi> moves, temp;
    if(distance_x > distance_y) {
        pi m = {0,0};
        while(distance_x != distance_y) {
            m.first--; m.second++;
            distance_x--; distance_y++;
        }
        moves.push(m);
    }
    if(distance_x < distance_y) {
        pi m = {0,0};
        while(distance_x != distance_y) {
            m.first++; m.second--;
            distance_x++; distance_y--;
        }
        moves.push(m);
    }
    if(distance_x > 0 && distance_y > 0) {
        pi m = {0,0};
        while(distance_x > 0) {
            m.first--; m.second--;
            distance_x--; distance_y--;
        }
        moves.push(m);
    }
    if(distance_x < 0 && distance_y < 0) {
        pi m = {0,0};
        while(distance_x < 0) {
            m.first++; m.second++;
            distance_x++; distance_y++;
        }
        moves.push(m);
    }
    cout << moves.size() << " " << x << " " << xi << " ";
    while(!moves.empty()) {
        pi a = moves.top(); moves.pop();
        if(x-a.first < 'A' || x-a.first > 'H' || xi-a.second < 1 || xi-a.second > 8) {temp.push(a); continue;}
        //cout << "(" << a.first << "," << a.second << ") ";
        x -= a.first; xi -= a.second;
        cout << x << " " << xi << " ";
    } 
    while(!temp.empty()) {
        pi b = temp.top(); temp.pop();
        x -= b.first; xi -= b.second;
        cout << x << " " << xi << " ";
    } cout << endl;
}

int main() {
    // char par && number par is white, else black
    // char impar && number impar is white, else black
    int t; cin >> t;
    while(t--) solve();
    return 0;
}