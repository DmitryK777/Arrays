#include <iostream>
using namespace std;

#define SHIFT_LEFT
#define SHIFT_RIGHT

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10; // Количество элементов в массиве
	int array[n] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
	cout << "Изначальный массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl << endl;

#if defined SHIFT_LEFT
	int l; // количество элементов, на которое надо сдвинуть массив влево
	cout << "Задайте число элементов для циклического сдвига массива влево: "; cin >> l;
	cout << endl;

	cout << "Результат сдвига массива влево:" << endl << endl;
	int count_l = l; // Счётчик для добавления элементов в хвост массива
	for (int i = 0; i < l; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << array[j] << "\t";
		}
		for (int j = 0; j < (l - count_l); j++)
		{
			cout << array[j] << "\t";
		}
		count_l--;

		cout << endl;
	}
	cout << endl;
#endif

#if defined SHIFT_RIGHT
	int r; // количество элементов, на которое надо сдвинуть массив вправо
	cout << "Задайте число элементов для циклического сдвига массива вправо: "; cin >> r;
	cout << endl;

	cout << "Результат сдвига массива вправо:" << endl << endl;
	int count_r = 0; // Счётчик для добавления элементов в начало массива
	for (int i = 0; i < r; i++)
	{
		for (int j = (n - count_r); j < n; j++)
		{
			cout << array[j] << "\t";
		}
		for (int j = 0; j < (n - count_r); j++)
		{
			cout << array[j] << "\t";
		}
		
		count_r++;

		cout << endl;
	}
	cout << endl;
#endif
}