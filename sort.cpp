#include <bits/stdc++.h>
using namespace std;
int main() {
	std::srand(static_cast<unsigned int>(std::time(NULL)));
	int n;
	cin >> n;
	int m[n], s[n];
	for (int i = 0; i < n; i++) {
		m[i] = rand() % 100 + 1;
		cout << m[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		int max=-1e9, max_i;
		for (int j = 0; j < n; j++) {
			if (max < m[j]) {
				max = m[j];
				max_i = j;
			}
		}
		m[max_i] = -1e9;
		s[n-i-1] = max;
	}
	for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
	cout << endl;
	return 0;
}