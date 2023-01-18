#include <iostream>
#include <climits>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, budget, hotels, weeks;
    while(cin >> n) {
        int cost = INT_MAX;
        cin >> budget >> hotels >> weeks;
        rep(i,0,hotels) {
            int price; cin >> price;
            rep(j,0,weeks) {
                int beds; cin >> beds;
                if(beds >= n && budget >= price*beds) cost = min(cost, price*n);
            }
        }
        cost == INT_MAX ? printf("stay home\n") : printf("%d\n", cost);
    }
    return 0;
}