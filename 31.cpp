#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	while(getline(cin, s)) {
		stringstream ss;
		map<int, int> cnt;
		ss << s;
		int n = 0;
		int num;
		int mx_num = 0;
		while(ss >> num) {
			n++;
			cnt[num]++;
			if(cnt[mx_num] < cnt[num]) {
				mx_num = num;
			}
		}

		if(cnt[mx_num] > n / 2) cout << mx_num << endl;
		else cout << "NO\n";
	}
	return 0;
}