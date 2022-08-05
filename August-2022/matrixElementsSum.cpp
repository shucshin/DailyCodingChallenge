#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int> > matrix) {
    int ans = 0;
    string ghost = "";
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix[i].size(); j++) {
            if(matrix[i][j] == 0)
                ghost += to_string(j);
            if(ghost.find(to_string(j)) == -1)
                ans += matrix[i][j];
        }
    }
    return ans;
}

int main() {
	vector<vector<int> > matrix = {
		{0, 1, 1, 2},
		{0, 5, 0, 0},
		{0, 0, 0, 0}	
	};
	cout << solution(matrix) << endl;
	return 0;
}
