#include "stdafx.h"
#include "Constants.h"
#include "Sort.h"
#include "FillRand.h"
#include "Shifts.h"
#include "Print.h"
#include "Statistics.h"


void main()
{

	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	cout << "��������� ������: ";
	Print(arr, n);
	cout << endl;
	Sort(arr, n);
	cout << "��������������� ������: ";
	Print(arr, n);
	cout << endl;
	const int SIZE = 8;
	double brr[SIZE];
	FillRand(brr, SIZE);
	cout << "��������� ������ #2: ";
	Print(brr, SIZE);
	cout << endl;
	Sort(brr, SIZE);
	cout << "��������������� ������ #2: ";
	Print(brr, SIZE);
	cout << endl;
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "����� ��������� ������� #2: " << Sum(brr, SIZE) << endl;
	cout << "������� �������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "������� �������������� ��������� ������� #2: " << Avg(brr, SIZE) << endl;
	cout << "����������� ��������: " << Min(arr, n) << endl;
	cout << "����������� �������� #2: " << Min(brr, SIZE) << endl;
	cout << "������������ ��������: " << Max(arr, n) << endl;
	cout << "������������ �������� #2: " << Max(brr, SIZE) << endl;

	cout << endl;
	
	// ����� ������� �� ������� �����
	const int lshifts = 2;
	LeftShift(arr, n, lshifts);
	Print(arr, n);
	cout << endl;
	// ����� ������� �� ������� ������
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
	LeftShift2(i_arr_2, ROWS, COLS, lshifts); // �������� ����
	Print(i_arr_2, ROWS, COLS);


	
	

}







