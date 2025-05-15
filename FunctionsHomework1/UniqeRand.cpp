#include "UniqeRand.h"
void UniqeRand(int arr[], const int n)
{
	bool exists;
	for (int i = 0; i < n; i++)
	{
		do {
			exists = false;
			arr[i] = rand() % 100;
			for (int x = 0; x < i; x++)
			{
				if (arr[x] == arr[i]) { exists = true; }

			}


		} while (exists);
	}

}
void UniqeRand(double arr[], const int n)
{
	bool exists;
	for (int i = 0; i < n; i++)
	{
		do {
			exists = false;
			arr[i] = rand() % 10000;
			arr[i] /= 100;
			for (int x = 0; x < i; x++)
			{
				if (arr[x] == arr[i]) { exists = true; }

			}


		} while (exists);
	}

}
void UniqeRand(int arr[ROWS][COLS], const int ROWS , const int COLS)
{
	bool exists;
	for (int i = 0; i < ROWS; i++)
	{	
		for(int j = 0; j < COLS ; j++)
			do {
				exists = false;
				arr[i][j] = rand() % 100;
					for (int x = 0; x < i; x++)
					{
						for (int z = 0; z < j ; z++)
						if (arr[x][z] == arr[i][j]) { exists = true; }

					}


			} while (exists);
	}

}
void UniqeRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	bool exists;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			do {
				exists = false;
				arr[i][j] = rand() % 10000;
				arr[i][j] /= 1000;
				for (int x = 0; x < i; x++)
				{
					for (int z = 0; z < j; z++)
						if (arr[x][z] == arr[i][j]) { exists = true; }

				}


			} while (exists);
	}

}