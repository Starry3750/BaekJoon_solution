#include <iostream>
using namespace std;

int main() {
	int val = 0, index = 0;
	cin >> val;
	
	int new_val = val;

	while (1) {
		if (new_val == val)
			break;
		else {
			int front = 0;
			front = (val / 10);
			new_val = ((val % 10) * 10) + front;
		}
		

	}


	return 0;
}