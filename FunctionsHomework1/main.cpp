#include "stdafx.h"
#include "Constants.h"
#include "Sort.h"
#include "FillRand.h"
#include "Sort.cpp"
#include "FillRand.cpp"

template<typename T>
void Print(T arr[], const int n);
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

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

template<typename T>
void LeftShift(T arr[], const int n, int shifts);
template<typename T>
void LeftShift(T arr[ROWS][COLS], const int ROWS, const int COLS , int shifts);
template<typename T>
void LeftShift2(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts); // Сквозной массив

template<typename T>
void RightShift(T arr[], const int n, int shifts);
template<typename T>
void RightShift(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);

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
template<typename T>
void LeftShift(T arr[], const int n, int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		T buffer = arr[0];
		for (int x = 0; x < n; x++)
		{
			arr[x] = arr[x + 1];

		}
		arr[n - 1] = buffer;
	}
}

template<typename T>
void LeftShift(T arr[ROWS][COLS], const int ROWS, const int COLS , int shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		LeftShift(arr[i], COLS, shifts);
	}
}
template<typename T>
void LeftShift2(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	
	LeftShift(arr[0], ROWS*COLS, shifts);
	
}
template<typename T>
void RightShift(T arr[], const int n, int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		T buffer = arr[n - 1];
		for (int x = n - 1; x > 0; x--)
		{
			arr[x] = arr[x - 1];

		}
		arr[0] = buffer;
	}
}
template<typename T>
void RightShift(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		LeftShift(arr[i], COLS, COLS - shifts);
	}
}
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;

}




