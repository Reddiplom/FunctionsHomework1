#include "Statistics.h"

int Sum(int arr[], const int n)
{
	int sum = 0;

	for (int i = 0; i < n;i++)
	{
		sum += arr[i];

	}

	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;

	for (int i = 0; i < n;i++)
	{
		sum += arr[i];

	}

	return sum;
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			sum += arr[i][n];
		}

	}
	cout << "Сумма двумерного массива int: ";
	return sum;

}
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			sum += arr[i][n];
		}

	}
	cout << "Сумма двумерного массива double: ";
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
double Avg(double arr[], const int n)
{
	double sum = 0;

	for (int i = 0; i < n;i++)
	{
		sum += arr[i];

	}

	return sum / n;
}
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			sum += arr[i][n];
		}

	}
	cout << "Cр.арифм двумерного массива int: ";
	return sum / (ROWS * COLS);

}
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			sum += arr[i][n];
		}

	}
	cout << "Cр.арифм двумерного массива double: ";
	return sum / (ROWS * COLS);

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
double Min(double arr[], const int n)
{
	double buffer = arr[0];

	for (int i = 1; i < n;i++)
	{
		if (buffer > arr[i])
		{
			buffer = arr[i];
		}
	}

	return buffer;
}
int Min(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			if (buffer > arr[i][n])
			{
				buffer = arr[i][n];
			}
		}

	}
	cout << "Минимальное значение двойного массива int: ";
	return buffer;
}

double Min(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double buffer = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			if (buffer > arr[i][n])
			{
				buffer = arr[i][n];
			}
		}

	}
	cout << "Минимальное значение двойного массива double: ";
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
double Max(double arr[], const int n)
{
	double buffer = arr[0];

	for (int i = 1; i < n;i++)
	{
		if (buffer < arr[i])
		{
			buffer = arr[i];
		}
	}

	return buffer;
}
int Max(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int buffer = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			if (buffer < arr[i][n])
			{
				buffer = arr[i][n];
			}
		}

	}
	cout << "Максимальное значение двойного массива int: ";
	return buffer;
}

double Max(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double buffer = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			if (buffer < arr[i][n])
			{
				buffer = arr[i][n];
			}
		}

	}
	cout << "Максимальное значение двойного массива double: ";
	return buffer;
}