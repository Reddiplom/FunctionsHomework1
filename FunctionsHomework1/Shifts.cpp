#include "Statistics.h"
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
void LeftShift(double arr[], const int n, int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		double buffer = arr[0];
		for (int x = 0; x < n; x++)
		{
			arr[x] = arr[x + 1];

		}
		arr[n - 1] = buffer;
	}
}
void LeftShift(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		LeftShift(arr[i], COLS, shifts);
	}
}
void LeftShift(double arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		LeftShift(arr[i], COLS, shifts);
	}
}
void LeftShift2(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{

	LeftShift(arr[0], ROWS * COLS, shifts);

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
void RightShift(double arr[], const int n, int shifts)
{
	for (int i = 0; i < shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int x = n - 1; x > 0; x--)
		{
			arr[x] = arr[x - 1];

		}
		arr[0] = buffer;
	}
}
void RightShift(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		LeftShift(arr[i], COLS, COLS - shifts);
	}
}
void RightShift(double arr[ROWS][COLS], const int ROWS, const int COLS, int shifts)
{
	for (int i = 0; i < ROWS; i++)
	{
		LeftShift(arr[i], COLS, COLS - shifts);
	}
}