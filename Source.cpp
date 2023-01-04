#include<iostream>
#include <conio.h>
#include <windows.h>
#include<string>
using namespace std;

int main()
{

	int* pa = new int;
	*pa = 20;
	int* ptx = pa;

	cout << *pa << endl;
	cout << pa << endl;

	delete pa;
	pa = 0;
	cout << pa << endl << *ptx << endl;


	getchar();
	system("pause");
	return 0;
}