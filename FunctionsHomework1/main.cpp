#include "stdafx.h"
#include "Constants.h"
#include "Sort.h"
#include "FillRand.h"
#include "Shifts.h"
#include "Print.h"



template<typename T>
T Sum(T arr[], const int n);
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
double Avg(T arr[], const int n);
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Min(T arr[], const int n);
template<typename T>
T Min(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>
T Max(T arr[], const int n);
template<typename T>
T Max(T arr[ROWS][COLS], const int ROWS, const int COLS);


void main()
{

	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	cout << "Случайный массив: ";
	Print(arr, n);
	cout << endl;
	Sort(arr, n);
	cout << "Отсортированный массив: ";
	Print(arr, n);
	cout << endl;
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	cout << "Случайный массив #2: ";
	Print(brr, SIZE);
	cout << endl;
	Sort(brr, SIZE);
	cout << "Отсортированный массив #2: ";
	Print(brr, SIZE);
	cout << endl;
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Сумма элементов массива #2: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива #2: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение: " << Min(arr, n) << endl;
	cout << "Минимальное значение #2: " << Min(brr, SIZE) << endl;
	cout << "Максимальное значение: " << Max(arr, n) << endl;
	cout << "Максимальное значение #2: " << Max(brr, SIZE) << endl;

	cout << endl;
	
	// Вывод массива со сдвигом влево
	const int lshifts = 2;
	LeftShift(arr, n, lshifts);
	Print(arr, n);
	cout << endl;
	// Вывод массива со свдигом вправо
	const int rshifts = 2;
	RightShift(arr, n, rshifts);
	Print(arr, n);
	cout << endl;
	cout << delimiter << endl;
	
	double i_brr_2[ROWS][COLS];
	int i_arr_2[ROWS][COLS] =
	{
		{3,5,8},
		{13,21,34},
		{55,89,144},
	};
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;
	FillRand(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);

	cout << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << Sum(i_brr_2, ROWS, COLS) << endl;
	cout << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << Avg(i_brr_2, ROWS, COLS) << endl;
	cout << Min(i_arr_2, ROWS, COLS) << endl;
	cout << Min(i_brr_2, ROWS, COLS) << endl;
	cout << Max(i_arr_2, ROWS, COLS) << endl;
	cout << Max(i_brr_2, ROWS, COLS) << endl;
	cout << delimiter << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;
	Sort(i_brr_2, ROWS, COLS);
	Print(i_brr_2, ROWS, COLS);
	cout << delimiter << endl;
	LeftShift(i_arr_2, ROWS, COLS, lshifts);
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;
	RightShift(i_arr_2, ROWS, COLS, lshifts);
	Print(i_arr_2, ROWS, COLS);
	cout << delimiter << endl;
	LeftShift2(i_arr_2, ROWS, COLS, lshifts); // сквозной шифт
	Print(i_arr_2, ROWS, COLS);


	
	

}
template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;

	for (int i = 0; i < n;i++)
	{
		sum += arr[i];

	}

	return sum;
}
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0 ; i < ROWS ; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			sum += arr[i][n];
		}

	}
	cout << "Сумма двумерного массива: ";
	return sum ;
	
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
template<typename T>
double Avg(T arr[], const int n)
{
	T sum = 0;

	for (int i = 0; i < n;i++)
	{
		sum += arr[i];

	}

	return (double)sum / n;
}
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			sum += arr[i][n];
		}

	}
	cout << "Cр.арифм двумерного массива: ";
	return sum / (ROWS*COLS);

}

template<typename T>
T Min(T arr[], const int n)
{
	T buffer = arr[0];

	for (int i = 1; i < n;i++)
	{
		if (buffer > arr[i])
		{
			buffer = arr[i];
		}
	}

	return buffer;
}
template<typename T>
T Min(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T buffer = arr[0][0];
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
template<typename T>
T Max(T arr[], const int n)
{
	T buffer = arr[0];

	for (int i = 1; i < n;i++)
	{
		if (buffer < arr[i])
		{
			buffer = arr[i];
		}
	}

	return buffer;
}

template<typename T>
T Max(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T buffer = arr[0][0];
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






