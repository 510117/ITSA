#include <bits/stdc++.h>
using namespace std;
string s[10][10];
void init() {
	s[0][0] = "*****";
	s[0][1] = "*   *";
	s[0][2] = "*   *";
	s[0][3] = "*   *";
	s[0][4] = "*****";

	s[1][0] = "    *";
	s[1][1] = "    *";
	s[1][2] = "    *";
	s[1][3] = "    *";
	s[1][4] = "    *";

	s[2][0] = "*****";
	s[2][1] = "    *";
	s[2][2] = "*****";
	s[2][3] = "*    ";
	s[2][4] = "*****";

	s[3][0] = "*****";
	s[3][1] = "    *";
	s[3][2] = "*****";
	s[3][3] = "    *";
	s[3][4] = "*****";

	s[4][0] = "*   *";
	s[4][1] = "*   *";
	s[4][2] = "*****";
	s[4][3] = "    *";
	s[4][4] = "    *";

	s[5][0] = "*****";
	s[5][1] = "*    ";
	s[5][2] = "*****";
	s[5][3] = "    *";
	s[5][4] = "*****";

	s[6][0] = "*****";
	s[6][1] = "*    ";
	s[6][2] = "*****";
	s[6][3] = "*   *";
	s[6][4] = "*****";

	s[7][0] = "*****";
	s[7][1] = "    *";
	s[7][2] = "    *";
	s[7][3] = "    *";
	s[7][4] = "    *";

	s[8][0] = "*****";
	s[8][1] = "*   *";
	s[8][2] = "*****";
	s[8][3] = "*   *";
	s[8][4] = "*****";

	s[9][0] = "*****";
	s[9][1] = "*   *";
	s[9][2] = "*****";
	s[9][3] = "    *";
	s[9][4] = "    *";
}
int main() {
	init();
	string num;
	cin >> num;
	string ans[5];
	for(int i = 0; i < 4; i++) {
		char c = num[i];
		for(int j = 0; j < 5; j++) {
			ans[j] += s[c - '0'][j];
			if(i != 3) ans[j] += ' ';
		}
	}
	for(int i = 0; i < 5; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}