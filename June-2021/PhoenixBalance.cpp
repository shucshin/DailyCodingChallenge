#include <iostream>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n;
        int nums [n];
        int two = 1;
        for(int j = 0; j < n; j++) {
            two *= 2;
            nums[j] = two;
        }
        int sum1 = nums[n-1];
        int sum2 = nums[n-2];
        int sum2Count = 1;

        for(int j = n-3; j >= 0; j--) {
            if(sum2Count < n/2){
                sum2 += nums[j];
                sum2Count++;
            }
            else
                sum1 += nums[j];
        }
        cout << abs(sum1-sum2) << endl;
    }
}