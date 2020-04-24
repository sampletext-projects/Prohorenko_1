#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Программу сделала Прохоренко Полина Андреевна студент группы УТН-111\n";
	cout << "Программа для нахождения трёхзначных чисел с заданной суммой цифр\n";

	int k;

	do
	{
		int n;
		cout << "Введите число N: ";
		cin >> n;
		int count = 0;

		for (int i = 100; i < 1000; i++)
		{
			int sum = 0;
			int t = i;
			while (t != 0)
			{
				sum += t % 10;
				t /= 10;
			}
			if (sum == n)
			{
				count++;
				cout << i << " ";
			}
		}

		cout << "\nНайдено " << count << " трёхзначных чисел с суммой цифр " << n << "\n";
		cout << "Повторить(1): ";
		cin >> k;
	}
	while (k == 1);

	system("pause");

	return 0;
}
