#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	unordered_map<string, int> umap;
	for(int i=0; i < s.length()-1; i++) 
		umap[s.substr(i,2)]++;
	string key;
	int max=0;
	for(auto s : umap) {
		if(s.second > max) {
			key = s.first;
			max = s.second;
		}
	}
	cout << key << endl;
	return 0;
}
