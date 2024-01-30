//Arrays
#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		cout << "Введите " << i + 1 << "-й " << "элемент массива: "; cin >> arr[i];
	}
	cout << endl;

	cout << "Получившийся массив:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;

	cout << "Массив в обратном порядке:" << endl;
	for (int i = n-1; i >= 0; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl << endl;

	cout << "Сумма элементов массива:" << endl;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << sum << endl;
	cout << endl;

	cout << "Среднее арифметическое элементов массива:" << endl;
	double average = (double)sum / (double)n;
	cout << average << endl;
	cout << endl;

	cout << "Минимальные и максимальные значения в массиве:" << endl;
	int min = arr[0];
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	cout << "Минимум:  " << min << endl;
	cout << "Максимум: " << max << endl;
	cout << endl;
}