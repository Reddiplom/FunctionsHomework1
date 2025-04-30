#include<iostream>
using namespace std;
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int Min(int arr[], const int n);
int Max(int arr[], const int n);
void LeftShift(int arr[], const int n, int shifts);
void RightShift(int arr[], const int n, int shifts);
void main()
{

	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	// ���������� ������� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	// ����� ��������� ������� �� �����
	cout << "��������� ������: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	//���������� �������
	for (int i = 0;i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}

		}
	}
	// ����� ��������� ������� �� �����
	cout << "��������������� ������: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� ��������: " << Min(arr, n) << endl;
	cout << "������������ ��������: " << Max(arr, n) << endl;
	int lshifts;
	int rshifts;

	// ����� ������� �� ������� �����
	cout << "������� ���������� ������� �����: ";
	cin >> lshifts;
	LeftShift(arr, n, lshifts);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	// ����� ������� �� ������� ������
	cout << "������� ���������� ������� �����: ";
	cin >> rshifts;
	RightShift(arr, n, rshifts);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int Sum(int arr[], const int n)
{
	int sum = 0;

	for (int i = 0; i < n;i++)
	{
		sum += arr[i];

	}

	return sum;
}
double Avg(int arr[], const int n)
{
	int sum = 0;

	for (int i = 0; i < n;i++)
	{
		sum += arr[i];

	}

	return (double)sum / n;
}
int Min(int arr[], const int n)
{
	int buffer = arr[0];

	for (int i = 1; i < n;i++)
	{
		if (buffer > arr[i])
		{
			buffer = arr[i];
		}
	}

	return buffer;
}
int Max(int arr[], const int n)
{
	int buffer = arr[0];

	for (int i = 1; i < n;i++)
	{
		if (buffer < arr[i])
		{
			buffer = arr[i];
		}
	}

	return buffer;
}
void LeftShift(int arr[], const int n, int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		int buffer = arr[0];
		for (int x = 0; x < n; x++)
		{
			arr[x] = arr[x + 1];

		}
		arr[n - 1] = buffer;
	}
}
void RightShift(int arr[], const int n, int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int x = n - 1; x > 0; x--)
		{
			arr[x] = arr[x - 1];

		}
		arr[0] = buffer;
	}
}