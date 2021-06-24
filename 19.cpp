#include <bits/stdc++.h>
using namespace std;
const int N = 30;
class Task {
public:
	int start, end;
	bool operator < (const Task a) {
		return start < a.start;
	}
	Task(int _start, int _end) : start(_start), end(_end) {}
	Task() {}
}task[N];
int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> task[i].start >> task[i].end;
	}
	sort(task, task + n);

	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i = 0; i < n; i++) {
		if(pq.empty() || pq.top() > task[i].start) {
			pq.push(task[i].end);
		} else {
			pq.pop();
			pq.push(task[i].end);
		}
	}
	cout << pq.size() << endl;
	return 0;
}