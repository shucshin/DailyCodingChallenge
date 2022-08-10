#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int> a) {
    for(int i = 0; i < a.size()-1; i++) {
        for(int j = i+1; j < a.size(); j++) {
            if(a[i] == -1)
                break;
            if(a[j] == -1)
                continue;
            if(a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}

void printVector(vector<int> a) {
    for(int i = 0; i < a.size(); i++) {
        if(i == a.size()-1) {
            cout << a[i] << endl;
            break;
        }
        cout << a[i] << " ";
    }
}

int main() {
    vector<int> vec = {-1, 150, 190, 170, -1, -1, 160, 180};
    vec = solution(vec);
    printVector(vec);
    return 0;
}