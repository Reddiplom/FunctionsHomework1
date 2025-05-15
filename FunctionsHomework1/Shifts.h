#pragma once
#include "stdafx.h"
#include "Constants.h"

void LeftShift(int arr[], const int n, int shifts);
void LeftShift(double arr[], const int n, int shifts);
void LeftShift(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);
void LeftShift(double arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);
void LeftShift2(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts); // Сквозной массив

void RightShift(int arr[], const int n, int shifts);
void RightShift(double arr[], const int n, int shifts);
void RightShift(int arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);
void RightShift(double arr[ROWS][COLS], const int ROWS, const int COLS, int shifts);