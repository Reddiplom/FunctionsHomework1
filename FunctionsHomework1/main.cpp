#include<iostream>
using namespace std;

#define delimiter "\n---------------------------------------------------------------------\n"

const int ROWS = 4;
const int COLS = 5;

void Sort(int arr[], const int n);
void Sort(double arr[], const int n);
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS);

void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);

int Min(int arr[], const int n);
double Min(double arr[], const int n);
int Min(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Min(double arr[ROWS][COLS], const int ROWS, const int COLS);

int Max(int arr[], const int n);
double Max(double arr[], const int n);
int Max(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Max(double arr[ROWS][COLS], const int ROWS, const int COLS);

void LeftShift(int arr[], const int n, int shifts);
void LeftShift(double arr[], const int n, int shifts);
void LeftShift(int arr[ROWS][COLS], const int ROWS, const int COLS , int shifts);
void LeftShift(double arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);
void LeftShift2(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts); // Сквозной массив

void RightShift(int arr[], const int n, int shifts);
void RightShift(double arr[], const int n, int shifts);
void RightShift(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);
void RightShift(double arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);

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
	for (int i = 0 ; i < ROWS ; i++)
	{
		for (int n = 0;n < COLS;n++)
		{
			sum += arr[i][n];
		}

	}
	cout << "Сумма двумерного массива int: ";
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
	return sum / (ROWS*COLS);

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
void LeftShift(int arr[ROWS][COLS], const int ROWS, const int COLS , int shifts)
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
	
	LeftShift(arr[0], ROWS*COLS, shifts);
	
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
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;

	}

}
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}
	}

}
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10000;
			arr[i][j] /= 100;
		}
	}

}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\t" << arr[i];
	}
}
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
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


void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n;j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n;j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS;j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS;l++)
				{
					if (arr[i][j] > arr[k][l])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}

				}
			}
		}
	}
}
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS;j++)
		{
			for (int k = i; k < ROWS; k++)
			{

				for (int l = k == i ? j + 1 : 0; l < COLS;l++)
				{
					if (arr[i][j] > arr[k][l])
					{
						double buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}

				}
			}
		}
	}
}
