#include <iostream>

using namespace std;

int main()
{
    int n;
    string a, b;
    cin >> n >> a >> b;
    int total = 0;

    for(int i = 0; i < n; i++) {
        long long case1 = abs((double)a[i]-(double)b[i]);
        long long case2 = 10 - (int)a[i] + (int)b[i];
        if(min(case1, case2) > 5) 
            total += (10 - min(case1, case2));
        else
            total += min(case1, case2);
    }
    cout << total << endl;
    

    return 0;
}