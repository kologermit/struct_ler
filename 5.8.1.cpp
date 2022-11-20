#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	bool answer = false;
	for (int i = 0; i < n; i++) {
		// cin >> v[i];
		v[i] = rand() % 100;
		cout << v[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		if (v[i] % 2 == 0) {
			cout << i + 1;
			answer = true;
			break;
		}
	}
	if (not answer) {
		cout << 0;
	}
}