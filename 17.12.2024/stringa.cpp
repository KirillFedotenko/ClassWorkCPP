#include "stringa.h"
int** stringa::memory(int row, int col)
{
	int**arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}
	return arr;
}

void stringa::fillManual(int** arr, int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cin >> arr[i][j];
		}
	}
}

void stringa::fillRand(int** arr, int row, int col)
{
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = -50 +rand() % 100;
		}
	}
}

void stringa::print(int** arr, int row, int col)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
}

void stringa::matrixToArr(int** arr, int* arr2, int row, int col)
{
	int count = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr2[count++] = arr[i][j];
		}
	}
}

void stringa::arrToMatrix(int** arr, int* arr2, int row, int col)
{
	int count = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = arr2[count++];
		}
	}
}

void stringa::sort(int** arr, int row, int col)
{
	int* arr2 = new int[row * col];
	matrixToArr(arr, arr2, row, col);
	for (int i = 0; i < row * col; i++) {
		for (int j = 0; j < (row * col) - 1; j++) {
			if (arr2[j] > arr2[j + 1]) {
				std::swap(arr2[j], arr2[j + 1]);
			}
		}
	}
	arrToMatrix(arr, arr2, row, col);
	delete[] arr2;
}

void stringa::sum(int** arr, int row, int col, int** arr2, int row2, int col2)
{
	if (row != row2 || col != col2) {
		std::cout << "error!" << std::endl;
		return;
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] += arr2[i][j];
		}
	}
}


void stringa::multiply(int** arr, int row, int col, int num)
{
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] *= num;
		}
	}
}

void stringa::trans(int** arr, int row, int col)
{
}