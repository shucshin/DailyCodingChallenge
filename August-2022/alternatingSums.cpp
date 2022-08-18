#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
#define PB push_back

vector<int> solution(vector<int> a) {
    int team1 = 0, team2 = 0;
    for(int i = 0; i < a.size(); i++) {
        if(i%2 == 0) team1 += a[i];
        else team2 += a[i];
    }
    vector<int> result;
    result.push_back(team1);
    result.push_back(team2);
    return result;
}

int main() {
    vector<int> a;
    a.PB(50);
    a.PB(60);
    a.PB(60);
    a.PB(45);
    a.PB(70);
    vi aa = solution(a);
    for(int i = 0; i < 2; i++)
        printf("Team %d: %d\n", i+1, aa[i]);
}