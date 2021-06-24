#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int cnt[7];
ll price[7] = {2000000, 200000, 40000, 10000, 4000, 1000, 200};
int main() {
	string special, prize[3];
	cin >> special;
	for(int i = 0; i < 3; i++) cin >> prize[i];
	int q;
	cin >> q;
	while(q--) {
		string s;
		cin >> s;
		if(s == special) {
			cnt[0]++;
			continue;
		}

		bool hit = 0;
		for(int i = 0; i < 6; i++) {
			for(int j = 0; j < 3; j++) {
				if(prize[j].substr(i) == s.substr(i)) hit = 1;
			}
			if(hit) {
				cnt[i + 1]++;
				break;
			}
		}
	}

	ll sum = 0;
	for(int i = 0; i < 7; i++) {
		sum += cnt[i] * price[i];
		cout << cnt[i];
		if(i != 6) cout << " ";
	}
	cout << endl << sum << endl;
	return 0;
}