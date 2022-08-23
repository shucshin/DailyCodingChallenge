#include <iostream>
#include <vector>
using namespace std;

vector<string> solution(vector<string> picture) {
    for(int i = 0; i < picture.size(); i++) {
        picture[i].insert(0, "*");
        picture[i].append("*");
    }
    string border = "";
    for(int i = 0; i < picture[0].size(); i++) 
        border += "*";
    picture.insert(picture.begin(), border);
    picture.push_back(border);
    return picture;
}

void printVector(vector<string> picture) {
    for(int i = 0; i < picture.size(); i++) {
        if(i == picture.size()-1) {
            cout << picture[i] << endl;
            break;
        }
        cout << picture[i] << endl;
    }
}

int main() {
    vector<string> picture = {"abc", "ded"};
    vector<string> result = solution(picture);
    printVector(result);
    return 0;
}