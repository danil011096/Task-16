#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	// Задание 1.
	std::cout << "Задание 1.\n\n";
	const int size = 10;
	int arr[size]{};
	srand(time(NULL));
	int sum = 0;
	int less;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		std::cout << arr[i] << " ";
		sum += arr[i];
	}
	less = sum / size;
	std::cout << "\n\nСреднее арефмитическое = " << less << ". \n";
	std::cout << std::endl;
	int min = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < less)
			min++;
	}
	std::cout << "Меньше среднего " << min << " элементов.\n";

	// Задание 2.

	std::cout << "\nЗадание 2.\n\n";
	const int size2 = 5;
	int arr2[size2][size2]{};
	int arr3[size2][size2]{};
	for (int i = 0; i < size2; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			arr2[i][j] = rand() % 101;
			std::cout << arr2[i][j] << "\t";
		}
		std::cout << " + \t";
		for (int y = 0; y < size2; y++)
		{
			arr3[i][y] = rand() % 101;
			std::cout << arr3[i][y] << "\t";
		}
		std::cout << " = \t";
		for (int j = 0; j < size2; j++)
		{
			std::cout << arr2[i][j] + arr3[i][j] << "\t";
		}
		std::cout << std::endl;
	}

	std::cout << "\nЗадача 3.\nВведи шестизначное число -> ";
	std::cin >> n;
	std::cout << std::endl;
	while (n < 100000 || n > 999999)
	{
		continue;
	}
	int arr5[6]{};
	int ten = 100000;
	for (int i = 0; i < 6; i++)
	{
		arr5[i] = n / ten % 10;
		std::cout << arr5[i] << "\t";
		ten /= 10;
	}
	std::cout << std::endl;
	return 0;
}