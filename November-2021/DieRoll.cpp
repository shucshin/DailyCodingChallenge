#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int y, w;
    cin >> y >> w;
    int m = max(y, w);
    int p = 6 - m + 1;
    switch(p) {
        case 6:
            cout << "1/1\n";
            break;
        case 5:
            cout << "5/6\n";
            break;
        case 4:
            cout << "2/3\n";
            break;
        case 3:
            cout << "1/2\n";
            break;
        case 2:
            cout << "1/3\n";
            break;
        case 1:
            cout << "1/6\n";
            break;
        default:
            cout << "0/1\n";
    }
    return 0;
}