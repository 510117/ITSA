#include <bits/stdc++.h>
using namespace std;
map<char, string> m;
void init() {
	m['A'] = "10";
	m['B'] = "11";
	m['C'] = "12";
	m['D'] = "13";
	m['E'] = "14";
	m['F'] = "15";
	m['G'] = "16";
	m['H'] = "17";
	m['J'] = "18";
	m['K'] = "19";
	m['L'] = "20";
	m['M'] = "21";
	m['N'] = "22";
	m['P'] = "23";
	m['Q'] = "24";
	m['R'] = "25";
	m['S'] = "26";
	m['T'] = "27";
	m['U'] = "28";
	m['V'] = "29";
	m['X'] = "30";
	m['Y'] = "31";
	m['W'] = "32";
	m['Z'] = "33";
	m['I'] = "34";
	m['O'] = "35";
}
int toN(char c) {
	return (c - '0');
}
int main() {
	init();
	string card;
	cin >> card;
	int P = toN(m[card[0]][0]) + 9 * (toN(m[card[0]][1]));
	for(int i = 1; i <= 8; i++) {
		P += (8 - i + 1) * toN(card[i]);
	}
	P += toN(card[9]);
	if(P % 10 == 0) cout << "CORRECT!!!\n";
	else cout << "WRONG!!!\n";
	return 0;
}