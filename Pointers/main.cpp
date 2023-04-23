#include <iostream>

using namespace std;

//#define POINTERS_BASIC
		
void main ()
{
	setlocale (LC_ALL, ""); 
#ifdef POINTERS_BASIC

	int a = 2;
	int* pa = &a; //Pointer to 'a'
	cout << a << endl;//значение переменной 'a'
	cout << &a << endl;//взятие адреса переменной 'a' прямо при выводе
	cout << pa << endl;// вывод адреса переменной 'a', хранящегося в указателе 'pa'
	cout << *pa << endl;//разыменование указателя 'pa' и вывод на экран значения по адресу (переменной 'a')

	int* pb;
	int b = 3;
	pb = &b; //инициализируем указатель после объявления 
#endif
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << arr << endl;
	cout << *arr << endl;
	for (int i= 0; i < n; i++)
	{
		cout << (arr + i) << "\t";
	}
	cout << endl;
}