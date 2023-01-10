#include <iostream>
using namespace std;
#define rep(i,a,b) for(int i = a; i < b; i++)

int main() {
    int n, courses; cin >> n;
    string name, date1, date2;
    rep(i,0,n) {
        cin >> name >> date1 >> date2 >> courses;
        if(stoi(date1.substr(0,4)) >= 2010 || stoi(date2.substr(0,4)) >= 1991) {
            printf("%s eligible\n", name.c_str());
        }
        else {
            if(courses > 40)
                printf("%s ineligible\n", name.c_str());
            else 
                printf("%s coach petitions\n", name.c_str());
        }
    }
    return 0;
}