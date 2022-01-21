#include <iostream>

using namespace std;

int main()
{
    int t, n, d;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> d;
        int nums[n];
        int minA = 101, minB = 101, index = 0, max = 0;
        for(int j = 0; j < n; j++) {
            cin >> nums[j];
            if(nums[j] < minA) {
                minA = nums[j];
                index = j;
            }
            if(max < nums[j])
                max = nums[j];
        }
        for(int j = 0; j < n; j++) {
            if(j == index)
                continue;
            if(nums[j] < minB)
                minB = nums[j];
        }
        if(minA + minB <= d || max <= d)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}