#include <iostream>
using namespace std;

int main() {
    int x, y;
    while(cin >> x >> y) {
        if(!x && !y) break;
        if(x+y == 13) printf("Never speak again.\n");
        else if(x < y) printf("Left beehind.\n");
        else if(x > y) printf("To the convention.\n");
        else printf("Undecided.\n");
    }
    return 0;
}