#include<iostream>
#include <conio.h>
#include <windows.h>
#include<string>
using namespace std;

int main()
{
	int* pa;
	int a = 10;
	pa = new int;
	*pa = a;
	cout << *pa << endl; 
	delete pa;
	getchar();
	system("pause");
	return 0;
}
