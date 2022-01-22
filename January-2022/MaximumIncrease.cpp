#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0, spree = 0;
    int current = 0, last = 0;
    for(int i = 0; i < n; i++) {
        cin >> current;
        if(current > last) {
            spree++;
        }
        else {
            if(max < spree) 
                max = spree;
            spree = 1;
        }
        last = current;
    }
    if(max < spree)
        max = spree;
    cout << max << endl;
    return 0;
}