#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int levelCubes = 1;
    int level = 1;
    int height = 0;
    
    while(n >= levelCubes) {
        n -= levelCubes;
        height++;
        level++;
        levelCubes += level;
    }
    cout << height << endl;
    return 0;
}