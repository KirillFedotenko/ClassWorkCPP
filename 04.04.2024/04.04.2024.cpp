#include <iostream>
using namespace std;
void appendarr(int**& arr, int**& arr1, int n) {
	int size = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int** buf = new int* [size + 1];
	for (int i = 0; i < size; i++) {
		buf[i] = arr[i];
	}
	buf[size] = new int[size2];
	for (int i = 0; i<size2; i++) {
		buf[size][i] = arr1[i];
	}
	delete[]arr;
	arr = buf;
}
void removeColumn(int**& arr, int n) {
	int size = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int** buf = new int* [size];
	for (int i = 0; i < size; i++) {
		buf[i] = new int [size2-1];
		for (int j = 0; j < n; j++) {
			buf[i][j] = arr[i][j];
		}
		for (int j = n + 1; j < size2; j++) {
			buf[i][j - 1] = arr[i][j];
		}
	}
	for (int i = 0; i < size; i++) {
		delete[]arr[i];
	}
	delete[]arr;
	arr = buf;
}
void removeline(int**& arr, int n) {
	int size = _msize(arr) / sizeof(arr[0]);
	int** buf = new int* [size - 1];
	for (int i = 0; i < n; i++) {
		buf[i] = arr[i];
	}
	for (int i = n + 1; i < size; i++) {
		buf[i - 1] = arr[i];
	}
	delete[]arr[n];
	delete[]arr;
	arr = buf;
}
void sa(int**& arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
int main()
{
	srand (time(NULL));
	setlocale(LC_ALL, "rus");
	int** arr = new int* [7];
	int** arr1 = new int* [7]{};
	for (int i = 0; i < 7; i++) {
		arr[i] = new int[8];
		for (int j = 0; j < 8; j++) {
			arr[i][j]= 10 + rand() % 90;
		}
	}
	sa(arr);
	//cout << endl << endl;
	//removeline(arr, 3);
	//sa(arr);
	//cout << endl << endl;
	//removeColumn(arr, 3);
	//sa(arr);
	cout << endl << endl;
	appendarr(arr, arr1, 3);
	sa(arr);
}