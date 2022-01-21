#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int nums[n];
        int max, min;
        for(int j = 0; j < n; j++) {
            cin >> nums[j];
            if(j == 0) 
                max = min = nums[0];
            if(nums[j] > max)
                max = nums[j];
            if(nums[j] < min)
                min = nums[j];
        }
        cout << max - min << endl;
    }
    return 0;
}