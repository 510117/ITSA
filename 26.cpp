#include <iostream>
#include <algorithm>
using namespace std;
bool cmp(int A, int B) {
	int sumA = 0, sumB = 0;
	bool result = (A < B);
	while(A || B) {
		sumA += (A % 10);
		sumB += (B % 10);
		A /= 10;
		B /= 10;
	}
	if(sumA != sumB) return sumA < sumB;
	else return result;
}
int arr[105];
int main() {
	int n; 
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n, cmp);

	for(int i = 0; i < n; i++) {
		cout << arr[i];
		if(i != n - 1) cout << " ";
	}
	cout << endl;
	return 0;
}