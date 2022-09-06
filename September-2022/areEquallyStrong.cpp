#include <iostream>
using namespace std;

bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int meMax = max(yourLeft, yourRight), meMin = min(yourLeft, yourRight);
    int frMax = max(friendsLeft, friendsRight), frMin = min(friendsLeft, friendsRight);
    if(meMax == frMax && meMin == frMin) return true;
    else return false;
}

int main() {
    int yourLeft = 10, yourRight = 15, friendsLeft = 15, friendsRight = 10;
    cout << solution(yourLeft, yourRight, friendsLeft, friendsRight) << endl;
    int yourLeft2 = 15, yourRight2 = 10, friendsLeft2 = 15, friendsRight2 = 9;
    cout << solution(yourLeft2, yourRight2, friendsLeft2, friendsRight2) << endl;
    return 0;
}