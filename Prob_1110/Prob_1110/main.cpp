#include <iostream>
using namespace std;

int main() {
	int val = 0, index = 1;
	cin >> val;
	
	int new_val = val;
	int front = 0, back = 0;

	while (1) {
		front = (new_val / 10);
		back = (new_val % 10);
		new_val = ((new_val % 10) * 10) + ((front + back) % 10);
		
		if (new_val == val)
			break;
		else
			index++;
	}

	cout << index << endl;
	return 0;
}