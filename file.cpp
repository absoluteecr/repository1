#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b, c;
	cout << "\nВведіть A: ";
	cin >> a;
	cout << "\nВведіть B: ";
	cin >> b;
	(a%2==0 && b%2==0 || a%2<<0 && b%2<<0) ? cout << "\nA та В мають однакову парність" : cout << "\nA та В не мають однакову парність";
}
