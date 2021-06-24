#include <bits/stdc++.h>
using namespace std;
int main() {
	int h1, m1, h2, m2;
	cin >> h1 >> m1;
	cin >> h2 >> m2;
	int minute = (h2 - h1) * 60 + (m2 - m1);
	if(minute < 0) minute += 24 * 60;

	int ans = 0;
	if(minute <= 2 * 60) {
		ans = (minute / 30) * 30;
	} else if(minute <= 4 * 60) {
		ans = (120 / 30) * 30 + (minute - 120) / 30 * 40;
	} else {
		ans = (120 / 30) * 30 + (120 / 30) * 40 + (minute - 240) / 30 * 60;
	}
	cout << ans << endl;
	return 0;
}