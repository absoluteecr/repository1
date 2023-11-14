#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Hello";
	int a, b;
	cout << "\nВведіть A: ";
	cin >> a;
	cout << "\nВведіть B: ";
	cin >> b;
	cout << "\nА та В мають однакову парність?\t" << (a % 2 == 0 && b % 2 == 0 || a % 2 << 0 && b % 2 << 0) << endl;
}