#include <iostream>
using namespace std;
typedef double d;

int main() {
    d n;
    int positives = 0;
    d average = 0;
    for(int i = 0; i < 6; i++) {
        cin >> n;
        if(n > 0.0) {
            positives++;
            average += n;
        }
    }
    cout << positives << " valores positivos\n";
    printf("%.1f\n", average/4);
    return 0;
}