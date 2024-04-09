#include <iostream>
using namespace std;
void removeline(int**& arr, int n) {
	int size = _msize(arr) / sizeof(arr[0]);
	int** buf = new int* [size - 1];
	for (int i = 0; i < n; i++) {
		buf[i] = arr[i];
	}
	for (int i = n + 1; i < size; i++) {
		buf[i - 1] = arr[i];
	}
	delete[]arr;
	arr = buf;
}
void feelarr(int** arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			arr[i][j] = 1 + rand() % 9;
		}
	}
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
void removeColumn(int**& arr, int n) {
	int size = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int** buf = new int* [size];
	for (int i = 0; i < size; i++) {
		buf[i] = new int[size2 - 1];
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
void extendArray(int**& arr, int** arr2) {
	int arrSize1 = _msize(arr) / sizeof(arr[0]);
	int arrSize2 = _msize(arr[0]) / sizeof(arr[0][0]);
	int arr2Size1 = _msize(arr2) / sizeof(arr2[0]);

	int** buf = new int* [arrSize1 + arr2Size1];
	for (int i = 0; i < arrSize1; i++)
	{
		buf[i] = arr[i];
	}
	for (int i = arrSize1; i < arrSize1 + arr2Size1; i++)
	{
		buf[i] = new int[arrSize2];
	}
	for (int i = arrSize1; i < arrSize1 + arr2Size1; i++)
	{
		for (int j = 0; j < arrSize2; j++)
		{
			buf[i][j] = arr2[i - arrSize1][j];
		}
	}

	delete[] arr;
	arr = buf;
}
int main()
{
    setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int size1 = 3;
	int size2 = 4;
	int** arr = new int* [size1];
	int** arr2 = new int* [size1];
	for (int i = 0; i < size1; i++)
	{
		arr[i] = new int[size2];
		arr2[i] = new int[size2];

	}
	feelarr(arr);
	feelarr(arr2);
	sa(arr);
	cout << endl;
	sa(arr2);
	extendArray(arr, arr2);
	cout << endl;
	sa(arr);

}
                                                                                                                                                                                        