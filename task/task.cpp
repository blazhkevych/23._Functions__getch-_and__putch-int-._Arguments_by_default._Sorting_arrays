#include <iostream>
#include "resources/library/asciilib.h"
#include "resources/library/arr.h"
using namespace std;

int main()
{
	/*
	int _getch(); - функция ждёт нажатия любой клавиши и возвращает её виртуальный код.
	Для использования функции требуется библиотека conio.h
	Виртуальные коды клавиш https://msdn.microsoft.com/en-us/library/windows/desktop/dd375731%28v=vs.85%29.aspx

	int _putch(int c); - функция выводит символ в консоль
	*/

	/*system("cls");
	cout << "Task 1.\n";
	cout << "Enter a text: \n";
	reverse_register();*/

	/*system("cls");
	cout << "Task 2.\n";
	srand(time(0));
	const int size{ 8 };
	int arr[size]{0};
	InitArrayRandom(arr, size, 1, 10);
	PrintArray(arr, size);
	cout << endl;
	SortHalfDescHalfAscend(arr, size);
	PrintArray(arr, size);*/

	system("cls");
	cout << "Task 2.\n";
	srand(time(0));
	const int size{ 8 };
	int arr[size]{ 0 };
	InitArrayRandom(arr, size, -10, 10);
	PrintArray(arr, size);
	cout << endl;
	/*<< LeftmostNegativeElement(arr, size)
	<< endl
	<< RightmostNegativeElement(arr, size);*/

	// TO DO : Дописать реализацию сортировки между двумя индексами.

	return 0;
}