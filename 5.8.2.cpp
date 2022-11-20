#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int sum(vector<int> v) {
	int s = 0;
	for (int i = 0; i < v.size(); i++) {
		s += v[i];
	}
	return s;
}
int main() {
	int n;
	cin >> n;
	vector<vector<int> > v(n, vector<int>(n));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// cin >> v[i][j];
			v[i][j] = rand() % 100;
			cout << v[i][j] << " ";
		}
		cout << endl;
	}
	int m = -1e9, m_i = -1;
	for (int i = 0; i < n; i++) {
		if (sum(v[i]) > m) {
			m = sum(v[i]);
			m_i = i;
		}
	}
	for (int j = 0; j < n; j++) {
		cout << v[m_i][j] << " ";
	}
	cout << endl << m_i << " " << sum(v[m_i]);
}