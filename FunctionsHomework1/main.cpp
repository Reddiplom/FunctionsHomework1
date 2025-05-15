#include "stdafx.h"
#include "Constants.h"
#include "FillRand.h"
#include "Print.h"
#include "Statistics.h"
#include "Sort.h"
#include "Shifts.h"
#include "UniqeRand.h"

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
	
	cout << delimiter << endl;
	
	// Выводим функцию заполнения массива случайными УНИКАЛЬНЫМИ числами для одномерного массива int
	int zrr[25];
	UniqeRand(zrr,25);
	Print(zrr, 25);
	cout << endl;
	// Выводим функцию заполнения массива случайными УНИКАЛЬНЫМИ числами для одномерного массива double
	cout << delimiter << endl;
	double xrr[25];
	UniqeRand(xrr, 25);
	Print(xrr, 25);
	cout << endl;
	cout << delimiter << endl;
	// Выводим функцию заполнения массива случайными УНИКАЛЬНЫМИ числами для двумерного массива int
	int i_zrr_2[5][5];
	UniqeRand(i_zrr_2,5,5);
	Print(i_zrr_2, 5 ,5);
	cout << endl;
	// Выводим функцию заполнения массива случайными УНИКАЛЬНЫМИ числами для двумерного массива double
	cout << delimiter << endl;
	double i_xrr_2[5][5];
	UniqeRand(i_xrr_2, 5, 5);
	Print(i_xrr_2, 5, 5);
	

}


