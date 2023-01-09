#include <iostream>
using namespace std;

int main() {
    int g, s, c; cin >> g >> s >> c;
    int buyingPower = g*3 + s*2 + c;
    
    string victory, treasure;
    if(buyingPower >= 8) victory = "Province";
    else if(buyingPower >= 5) victory = "Duchy";
    else if(buyingPower >= 2) victory = "Estate";
    else victory = "";

    if(buyingPower >= 6) treasure = "Gold";
    else if(buyingPower >= 3) treasure = "Silver";
    else treasure = "Copper";

    if(!victory.size()) cout << treasure << endl;
    else printf("%s or %s\n", victory.c_str(), treasure.c_str());
    return 0;
}