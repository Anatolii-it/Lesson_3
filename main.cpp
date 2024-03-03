#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
        const int SIZE = 5;
        int array[SIZE] = { 1, 2, 3, 4, 5 };
        cout << "Початковий масив:" << endl;
        for (int i = 0; i < SIZE; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;
        int* ptr = array;
        int* endPtr = array + SIZE - 1;
        while (ptr < endPtr) {
            
            int temp = *ptr;
            *ptr = *endPtr;
            *endPtr = temp;
            ++ptr;
            --endPtr;
        }

        cout << "Масив зі зміненим порядком:" << endl;
        for (int i = 0; i < SIZE; ++i) {
            cout << array[i] << " ";
        }
        cout << endl;


	_getch();
	return 0;
}