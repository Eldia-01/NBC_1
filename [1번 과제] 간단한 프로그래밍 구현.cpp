#include <iostream>

using namespace std;

int Sum(int num1, int num2, int num3, int num4, int num5);
double Avg(int num1, int num2, int num3, int num4, int num5);
void Select(int number[]);

int main()
{
	int num[5];

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << "번 숫자를 넣으세요 : ";
		cin >> num[i];
	}

	cout << "넣은 숫자의 합계: " << Sum(num[0], num[1], num[2], num[3], num[4]) << endl;
	cout << "넣은 숫자의 평균: " << Avg(num[0], num[1], num[2], num[3], num[4]) << endl;
	cout << "입력 숫자의 오름차순 배열: " << Select(num[5]) << endl;

	return 0;
}

int Sum(int num1, int num2, int num3, int num4, int num5)
{
	int totalSum = num1 + num2 + num3 + num4 + num5;

	return totalSum;
}

double Avg(int num1, int num2, int num3, int num4, int num5)
{
	double totalAvg = double(num1 + num2 + num3 + num4 + num5) / 5;

	return totalAvg;
}

void Select(int number[])
{
	int j = 0;

	for (int i = 1; i < 5; i++)
	{
		int key = number[i];

		for (int j = i - 1; j >= 0; j--)
		{
			if (number[j] > key)
			{
				number[j + 1] = number[j];
			}
			else
			{
				break;
			}
		}

		number[j + 1] = key;
	}
}