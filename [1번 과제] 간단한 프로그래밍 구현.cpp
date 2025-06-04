#include <iostream>
#include <string>

using namespace std;

int Sum(int number[], int size);
double Avg(int num1, int num2, int num3, int num4, int num5);
void Insertion(int num1[], int n);

int main()
{
	int num[5];

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번 숫자를 넣으세요 : ";
		cin >> num[i];
	}

	cout << "넣은 숫자의 합계: " << Sum(num, 5) << endl;
	cout << "넣은 숫자의 평균: " << Avg(num[0], num[1], num[2], num[3], num[4]) << endl;

	Insertion(num, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << num[i] << " ";
	}

	return 0;
}

int Sum(int number[], int size)
{
	int x = 0;

	for (int i = 0; i < size; i++)
	{
		x += number[i];
	}

	return x;
}

double Avg(int num1, int num2, int num3, int num4, int num5)
{
	double totalAvg = double(num1 + num2 + num3 + num4 + num5) / 5;

	return totalAvg;
}

void Insertion(int num1[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = num1[i];
		int j = i - 1;

		while (j >= 0 && num1[j] > key)
		{
			num1[j + 1] = num1[j];
			j--;
		}
		num1[j + 1] = key;
	}
}