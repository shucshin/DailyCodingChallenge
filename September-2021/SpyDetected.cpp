#include <iostream>

using namespace std;

void solve(int arr[], int length) {
    int a, b;
    for(int i = 0; i < length-1; i++){
        if(arr[i] != arr[i+1]){
            a = arr[i];
            b = arr[i+1];
        }
    }
    int freqA = 0, freqB = 0;
    for(int i = 0; i < length; i++) {
        if(arr[i] == a)
            freqA++;
        else
            freqB++;
    }
    if(freqA == 1){
        for(int i = 0; i < length; i++) {
            if(arr[i] == a)
                cout << i+1 << endl;
        }
    }
    else {
        for(int i = 0; i < length; i++){
            if(arr[i] == b)
                cout << i+1 << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int a[n];
        for(int j = 0; j < n; j++)
            cin >> a[j];
        solve(a, n);
    }
    return 0;
}