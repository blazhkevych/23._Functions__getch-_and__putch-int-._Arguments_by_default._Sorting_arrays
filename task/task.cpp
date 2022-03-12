#include <iostream>
#include "resources/library/asciilib.h"
#include "resources/library/arr.h"
#include "resources/library/games.h"
#include "resources/library/algorithms.h"
#include <windows.h> // Содержит SetConsoleOutputCP()
using namespace std;

int main()
{
	/*
	int _getch(); - функция ждёт нажатия любой клавиши и возвращает её виртуальный код.
	Для использования функции требуется библиотека conio.h
	Виртуальные коды клавиш https://msdn.microsoft.com/en-us/library/windows/desktop/dd375731%28v=vs.85%29.aspx

	int _putch(int c); - функция выводит символ в консоль
	*/
	SetConsoleOutputCP(1251);

	char answer{ 0 };
	int choice{ 0 };

	do
	{
		cout << "Enter task number:: "
			<< "\nTask № 1."
			<< "\nTask № 2."
			<< "\nTask № 3."
			<< "\nTask № 4."
			<< "\nTask № 5." << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			system("cls");
			cout << "Task 1.\n";
			cout << "Enter a text: \n";
			reverse_register();
		}
		break;

		case 2:
		{
			system("cls");
			cout << "Task 2.\n";
			srand(time(0));
			const int size{ 8 };
			int arr[size]{ 0 };
			InitArrayRandom(arr, size, 1, 10);
			PrintArray(arr, size);
			cout << endl;
			SortHalfDescHalfAscend(arr, size);
			PrintArray(arr, size);
		}
		break;

		case 3:
		{
			system("cls");
			cout << "Task 3.\n";
			srand(time(0));
			const int size{ 8 };
			int arr[size]{ 0 };
			InitArrayRandom(arr, size, -10, 10);
			PrintArray(arr, size);
			cout << endl;
			SortBetweenTwoIndices(arr, size, LeftmostNegElem(arr, size), RightmostNegElem(arr, size));
			PrintArray(arr, size);
		}
		break;

		case 4:
		{
			SetConsoleOutputCP(866);
			system("cls");
			cout << "Task 4.\n";
			srand(time(0));
			cout << "Who will throw first? Throwing dice...\n";

			int userRoll{ 0 }, computerRoll{ 0 };
			while (userRoll == computerRoll) // Если результаты бросков совпадают, бросаем еще по 1 разу.
			{
				userRoll = DiceRoll();
				cout << "\nUser : " << endl;
				DiceRollToScreen(userRoll);
				cout << endl;

				computerRoll = DiceRoll();
				cout << "\nComputer : " << endl;
				DiceRollToScreen(computerRoll);
				cout << endl;
			}

			int firstMove = FirstMove(userRoll, computerRoll);
			PrintFirstMove(firstMove);

			const int numberOfPlayers = 2; // Кол-во игроков.
			int numberOfMovesBy1Player = 5; // Кол-во ходов каждого игрока.
			int sumOfUserPoints = 0;
			int sumOfCompPoints = 0;
			int totalMovesInGame = numberOfMovesBy1Player * numberOfPlayers;
			while ((totalMovesInGame) > 0)
			{
				if (firstMove == 2)
				{
					userRoll = DiceRoll();
					cout << "\nUser : " << endl;
					DiceRollToScreen(userRoll);
					cout << endl;
					sumOfUserPoints += userRoll;
					firstMove -= 1;
					totalMovesInGame--;
				}
				else if (firstMove == 1)
				{
					int computerRoll = DiceRoll();
					cout << "\nComputer : " << endl;
					DiceRollToScreen(computerRoll);
					cout << endl;
					sumOfCompPoints += computerRoll;
					firstMove += 1;
					totalMovesInGame--;
				}
			}

			cout << "\nUser score : " << sumOfUserPoints << endl;
			cout << "Computer score : " << sumOfCompPoints << endl;

			if (sumOfUserPoints > sumOfCompPoints)
			{
				cout << "\nYou won !" << endl;
			}
			else
			{
				cout << "\nThe computer won !" << endl;
			}
			SetConsoleOutputCP(1251);
		}
		break;

		case 5:
		{
			cout << "Task 5.\n";
			int number = 123456789;
			cout << number << endl;
			CyclicNumberShift(number, 3, false);
			cout << endl;
			cout << number << endl;
			CyclicNumberShift(number, 2, true);
			cout << endl;
		}
		break;
		}

		cout << endl;
		cout << "Do you want to continue? ( y (yes) / n (no) )\n";
		cin >> answer;
		cout << endl;

	} while (answer == 'y');

	return 0;
}