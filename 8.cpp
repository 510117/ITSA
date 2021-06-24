#include <bits/stdc++.h>
using namespace std;
string isPrime(int x) {
	if(x == 1) return "NO";
	for(int i = 2; i * i <= x; i++) {
		if(x % i == 0) return "NO";
	}
	return "YES";
}
int main() {
	int n;
	while(cin >> n) {
		cout << isPrime(n) << endl;
	}
	return 0;
}