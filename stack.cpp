#include <iostream>
using namespace std;
#include "Stack.h"
int main() {
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	cout << s.pop();
	cout << s.pop();
	return 0;
}