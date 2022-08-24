#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;

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
    vi arr = {1, 2, 3}, arr2 = {2, 1, 3};
    vi arr3 = {1, 2, 2}, arr4 = {2, 1, 1};
    cout << solution(arr, arr2) << endl;
    cout << solution(arr3, arr4) << endl;
    return 0;
}