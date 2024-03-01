#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int SIZE = 5;
	int sourceArray[SIZE] = { 1, 2, 3, 4, 5 };
	int destinationArray[SIZE];

	for (int i = 0; i < SIZE; ++i) {
		*(destinationArray + i) = *(sourceArray + i);
	}

	cout << "Новая база:" << endl;
	for (int i = 0; i < SIZE; ++i) {
		cout << destinationArray[i] << " ";
	}
	cout << endl;


	_getch();
	return 0;
}