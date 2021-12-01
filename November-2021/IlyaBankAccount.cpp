#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    if(n >= 1) 
        cout << n << endl;
    else if(n >= -10 || (n/10 > -10 && n%10 == 0))
        cout << 0 << endl;
    else {
        int a = 1;
        n = llabs(n);
        int forArray = n;
        int last = n%10;
        int beforeLast = (n/10)%10;
        while(n >= 10) {
            a++;
            n /= 10;
        }
        int nums[a], i = a-1;
        while(i >= 0) {
            nums[i] = forArray%10;
            forArray /= 10;
            i--;
        }
        int maxA = max(last, beforeLast);
        bool token = true;
        cout << "-";
        for(int j = 0; j < a; j++) {
            if((j == a-2 || j == a-1) && nums[j] == maxA && token == true) {
                token = false;
                continue;
            }
            cout << nums[j];
        }
    }
    return 0;
}