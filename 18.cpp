#include <bits/stdc++.h>
using namespace std;
string line[8];
void init() {
	line[0] = "`1234567890-=";
	line[1] = "qwertyuiop[]\\:";
	line[2] = "asdfghjkl;\'";
	line[3] = "zxcvbnm,./";
	line[4] = "~!@#$%^&*()_+";
	line[5] = "QWERTYUIOP{}|";
	line[6] = "ASDFGHJKL:\"";
	line[7] = "ZXCVBNM<>?";
}
pair<int, int> where(char c) {
	for(int i = 0; i < 8; i++) {
		for(int j = 0; j < (int)line[i].size(); j++) {
			if(line[i][j] == c) return make_pair(i, j);
		}
	}
	assert(false);
}
int main() {
	init();
	string s; getline(cin, s);
	for(auto c : s) {
		c = tolower(c);
		if(isspace(c)) {
			if(c == ' ') cout << ' ';
			continue;
		}
		auto P = where(c);
		if(P.second + 1 == (int)line[P.first].size()) cout << line[P.first][P.second];
		else cout << line[P.first][P.second + 1];
	}
	cout << endl;
	return 0;
}