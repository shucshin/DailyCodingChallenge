#include <iostream>
#include <vector>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define pb(a) push_back(a)
#define median(a,b,c) max(min(a,b), min(max(a,b),c))

int main() {
    int a, b, c, x, y;
    while(cin >> a >> b >> c >> x >> y) {
        if(!(a+b+c+x+y)) break;
        // 28 29 51 - 50 52 => 30
        // 19 26 50 - 10 27 => -1
        // 10 20 30 - 24 26 => 21
        // 46 48 49 - 47 50 => all three aren't higher so choose a number higher than all
                            // 50 is taken so take 51
        /**
         * if both are higher than median of princess then just print the next number
         * higher than median of princess
         * 
         * else get a number that prince[1] > princess[1]
         * 
         * lowest of prince is bigger than lowerst of princess else -1
         * if all three of prince is higher than second highest of princess then wins
         * worst possible outcome.
        */
        bool found = false;
        vector<int> deck, princess(3), prince(3);
        princess[0] = min(a,min(b,c));
        princess[1] = median(a,b,c);
        princess[2] = max(a,max(b,c));
        rep(i,1,53) {if(i==a||i==b||i==c||i==x||i==y) continue; deck.pb(i);}
        for(auto z : deck) {
            prince[0] = min(x,min(y,z));
            prince[1] = median(x,y,z);
            prince[2] = max(x,max(y,z));
            if(princess[1] < prince[0] || prince[1] > princess[2]) {
                found = true;
                cout << z << endl;
                break;
            }
        }
        if(!found) cout << -1 << endl;
    }
    return 0;
}