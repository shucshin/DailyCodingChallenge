#include <iostream>

using namespace std;

int main()
{
    long long q, s;
    cin >> q >> s;
    long long sad = 0;
    for(int i = 0; i < q; i++) {
        string plusMinus;
        long long c;
        cin >> plusMinus >> c;
        if(plusMinus == "+"){
            s += c;
            continue;
        }
        if(s < c){
            sad++;
            continue;
        }
        s -= c;
    }
    cout << s << " " << sad << endl;
    return 0;
}