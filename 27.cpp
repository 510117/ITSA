#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin >> s;
	string guess;
	while(cin >> guess) {
		if(guess == "0000") break;
		int A = 0;
		int B = 0;
		for(int i = 0; i < 4; i++) {
			if(guess[i] == s[i]) A++;
		}

		for(int i = 0; i < 4; i++) {
			for(int j = 0;j < 4; j++) {
				if(guess[i] == s[j]) {
					B++;
					break;
				}
			}
		}
		cout << A << "A" << B - A << "B" << endl;
	}
}