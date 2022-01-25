#include <iostream>

using namespace std;

int solve(int n, int nums[]) {
    int total = 0, c = 0;
    for(int i = 0; i < n; i++) 
        total += nums[i];
    int mean = total/n;
    for(int i = 0; i < n; i++) {
        if(nums[i] > mean)
            c++;
    }
    if(n == 1 || n == total) {
        for(int i = 0; i < n-1; i++) {
            if(nums[i] != nums[i+1])
                return c;
        }
        return 0;
    }
    else if(total%n != 0)
        return -1;
    else 
        return c;
}

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int nums[n];
        for(int j = 0; j < n; j++) 
            cin >> nums[j];
        cout << solve(n, nums) << endl;
    }
    return 0;
}