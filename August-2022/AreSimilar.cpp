#include <iostream>
#include <vector>
using namespace std;

bool solution(vector<int> a, vector<int> b) {
    int c = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            c++;
    }
    bool sameElem = true;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            sameElem = false;
    }
    if(c > 2 || !sameElem)
        return false;
    else
        return true;
}

int main() {

    return 0;
}