#include <bits/stdc++.h>
using namespace std;
pair<int, int> day[12];
map<int, string> star;
void init() {
	day[0] = {1, 21};
	day[1] = {2, 19};
	day[2] = {3, 21};
	day[3] = {4, 21};
	day[4] = {5, 22};
	day[5] = {6, 22};
	day[6] = {7, 23};
	day[7] = {8, 24};
	day[8] = {9, 24};
	day[9] = {10, 24};
	day[10] = {11, 23};
	day[11] = {12, 22};
	star[0] = "Aquarius";
	star[1] = "Pisces";
	star[2] = "Aries";
	star[3] = "Taurus";
	star[4] = "Gemini";
	star[5] = "Cancer";
	star[6] = "Leo";
	star[7] = "Virgo";
	star[8] = "Libra";
	star[9] = "Scorpio";
	star[10] = "Sagittarius";
	star[11] = "Capricorn";
}
int main() {
	init();
	string s_month, s_day;
	cin >> s_month >> s_day;
	pair<int, int> date;
	date.first = (s_month[0] - '0') * 10 + (s_month[1] - '0');
	date.second = (s_day[0] - '0') * 10 + (s_day[1] - '0');
	int ans = 100;
	for(int i = 0; i < 12; i++) {
		if(date < day[i]) {
			ans = i - 1;
			break;
		}
	}
	if(ans == 100 || ans == -1) ans = 11;
	cout << star[ans] << endl;
	return 0;
}