#include <bits/stdc++.h>
using namespace std;
int main() {
	int r = 1, l = 2, m;
	char t = '>';
	while (t == '>') {
		cout << l << endl;
		cin >> t;
		l *= 2;
	}
	if (t == '=') {
		cout << "SUCCESS";
		return 0;
	}
	m = (r + l) / 2;
	while (true) {
		cout << m << endl;
		cin >> t;
		if (t == '=') {
			cout << "SUCCESS";
			return 0;
		}
		else if (t == '>') {
			r = m;
		}
		else {
			l = m;
		}
		m = (r + l) / 2;
	}
}