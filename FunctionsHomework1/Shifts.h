#pragma once
#include "stdafx.h"
#include "Constants.h"
template<typename T>
void LeftShift(T arr[], const int n, int shifts);
template<typename T>
void LeftShift(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);
template<typename T>
void LeftShift2(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts); // Сквозной массив

template<typename T>
void RightShift(T arr[], const int n, int shifts);
template<typename T>
void RightShift(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);
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
void LeftShift(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		LeftShift(arr[i], COLS, shifts);
	}
}
template<typename T>
void LeftShift2(T arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{

	LeftShift(arr[0], ROWS * COLS, shifts);

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