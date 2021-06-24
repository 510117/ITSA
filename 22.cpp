#include <bits/stdc++.h>
using namespace std;
int chess[3][3];
bool isSame(int x1, int y1, int x2, int y2, int x3, int y3) {
	return (chess[x1][y1] == chess[x2][y2] && chess[x2][y2] == chess[x3][y3]);
}
int main() {
	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			cin >> chess[i][j];
		}
	}
	bool win = 0;
	win |= isSame(0, 0, 0, 1, 0, 2);
	win |= isSame(1, 0, 1, 1, 1, 2);
	win |= isSame(2, 0, 2, 1, 2, 2);
	win |= isSame(0, 0, 1, 0, 2, 0);
	win |= isSame(0, 1, 1, 1, 2, 1);
	win |= isSame(0, 2, 1, 2, 2, 2);
	win |= isSame(0, 0, 1, 1, 2, 2);
	win |= isSame(0, 2, 1, 1, 2, 0);
	if(win) cout << "True\n";
	else cout << "False\n";
	return 0;
}