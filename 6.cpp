#include <bits/stdc++.h>
using namespace std;
map<int, string> season;
void init() {
	season[1] = "Winter";
	season[2] = "Winter";
	season[3] = "Spring";
	season[4] = "Spring";
	season[5] = "Spring";
	season[6] = "Summer";
	season[7] = "Summer";
	season[8] = "Summer";
	season[9] = "Autumn";
	season[10] = "Autumn";
	season[11] = "Autumn";
	season[12] = "Winter";
}
int main() {
	init();
	int month;
	while(cin >> month) {
		cout << season[month] << endl;
	}
	return 0;
}