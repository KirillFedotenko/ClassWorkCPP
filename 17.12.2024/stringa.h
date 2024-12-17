#pragma once
#include <iostream>
namespace stringa {
	int** memory(int row, int col);
	void fillManual(int** arr, int row, int col);
	void fillRand(int** arr, int row, int col);
	void print(int** arr, int row, int col);
	void matrixToArr(int** arr, int* arr2, int row, int col);
	void arrToMatrix(int** arr1, int* arr2, int row, int col);
	void sort(int** arr, int row, int col);
	void multiply(int** arr, int row, int col, int num);
	void trans(int** arr, int row, int col);
	void sum(int** arr, int row, int col, int** arr2, int row2, int col2);
}

