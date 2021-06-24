#include <bits/stdc++.h>
using namespace std;
map<char, int> weight;
void init() {
	weight['S'] = 4;
	weight['H'] = 3;
	weight['D'] = 2;
	weight['C'] = 1;
}
bool cmp(string a, string b) {
	if(a[0] != b[0]) {
		return weight[a[0]] > weight[b[0]];
	} else if(a.size() != b.size()) {
		return a.size() > b.size();
	} else {
		return a.substr(1) > b.substr(1);
	}
}
int main() {
	init();
	int t;
	cin >> t;
	string empty;
	getline(cin, empty);
	while(t--) {
		string s;
		getline(cin, s);
		stringstream ss;
		ss << s;
		string card;
		vector<string> v;
		while(ss >> card) {
			v.push_back(card);
		}

		sort(v.begin(), v.end(), cmp);

		bool first = 1;
		for(auto str : v) {
			if(first) first = 0;
			else cout << " ";
			cout << str;
		}
		cout << endl;
	}
}