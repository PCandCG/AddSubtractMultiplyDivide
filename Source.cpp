#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int operation;
	float answer;
	cout << "Please enter your first whole number: ";
	cin >> num1;
	cout << "Please enter your second whole number: ";
	cin >> num2;
	cout << "Please select an operation from the following list" << endl << "1. Add" << endl << "2. Subtract" << endl << "3. Multiply" << endl << "4. Divide" << endl;
	cin >> operation;
	if (operation == 1) {
		answer = num1 + num2;
	}
	else if (operation == 2) {
		answer = num1 - num2;
	}
	else if (operation == 3) {
		answer = num1 * num2;
	}
	else if (operation == 4) {
		answer = num1 / num2;
	}
	cout << "Answer: " << answer;
	return 0;
}
