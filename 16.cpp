#include <bits/stdc++.h>
using namespace std;
const int N = 100005;
int F[N];
void Failure(string &pat) { // build Failure Function
    int n = (int)pat.size(), j = 0;
    F[0] = 0;
    for(int i = 1;i < n;i++) {
        while(j != 0 && pat[i] != pat[j]) 
            j = F[j - 1];
        if(pat[j] == pat[i])
            j++;
        F[i] = j;
    }
}
int Matching(string &pat, string &text) {
    // calculate the number of occurrences of pattern in text
    int res = 0, j = 0, n = (int)text.size();
    for(int i = 0;i < n;i++) {
        while(j != 0 && pat[j] != text[i])
            j = F[j - 1];
        if(text[i] == pat[j]) {
            if(j == (int)pat.size() - 1) {
                res++;
                j = F[j];
            } else {
                j++;
            }
        }
    }
    return res;
}
int main() {
	string pat, text;
	cin >> pat >> text;
	Failure(pat);
	cout << Matching(pat, text) << endl;
}