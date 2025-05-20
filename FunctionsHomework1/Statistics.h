#pragma once
#include "stdafx.h"
#include "Constants.h"


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
	for (int i = 0; i < ROWS; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			sum += arr[i][n];
		}

	}
	cout << "����� ���������� �������: ";
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
	cout << "����� ���������� ������� double: ";
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
	cout << "C�.����� ���������� �������: ";
	return sum / (ROWS * COLS);

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
	cout << "����������� �������� �������� ������� int: ";
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
	cout << "����������� �������� �������� ������� double: ";
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
	cout << "������������ �������� �������� ������� int: ";
	return buffer;
}

