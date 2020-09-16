#include <iostream>
using namespace std;

int main() {
	int val1 = 0, val2 = 0;
	cin >> val1 >> val2;
	cout << val1 * ((val2 % 100) % 10) << endl;
	cout << val1 * ((val2 % 100) / 10) << endl;
	cout << val1 * (val2 / 100) << endl;
	cout << val1 * val2;

	return 0;
}