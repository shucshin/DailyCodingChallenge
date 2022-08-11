#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printVec(vector<int> vec) {
    for(int i = 0; i < 3; i++) {
        cout << vec[i] << endl;
    }
}

int main() {
    vector<int> arr;
    int a;
    for(int i = 0; i < 3; i++) {
        cin >> a;
        arr.push_back(a);
    }
    vector<int> newArr = arr;
    sort(newArr.begin(), newArr.end());

    printVec(newArr);
    cout << endl;
    printVec(arr);
    return 0;
}