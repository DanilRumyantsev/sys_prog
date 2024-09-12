#include <iostream>
using namespace std;

int main() {

	// #1
	int number = 42;
	cout << number << endl;;

	// #2
	double a = 3.14;
	double b = 2.71;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a / b << endl;
	cout << a * b << endl;

	// #3
	char letter = 'A';
	int letter_pos = letter;
	cout << letter_pos << endl;

	// #4
	bool flag = true;
	cout << boolalpha << flag << endl;
	flag = false;
	cout << boolalpha << flag << endl;

	// #5
	//int value;
	//cout << "Input value" << endl;
	//cin >> value;
	//cout << (value % 2 == 0 ? "true" : "false") << endl;
	//return 0;

	// #6
	int temp_c;
	cout << "Input value Celcium" << endl;
	cin >> temp_c;
	int temp_f;
	temp_f = (temp_c * 9) / 5 + 32;
	cout << "Farengeit => ";
	cout << temp_f << endl;
}