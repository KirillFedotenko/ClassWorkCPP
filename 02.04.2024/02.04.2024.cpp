#include <iostream>
using namespace std;
void sa(int* array) {
	int size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}
void append(int*& array, int n) {
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size + 1];
	for (int i = 0; i < size; i++) {
		buf[i] = array[i];
	}
	buf[size] = n;
	delete[]array;
	array = buf;
}
void remove(int*& array) {
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size - 1];
	for (int i = 0; i < size-1; i++) {
		buf[i] = array[i];
	}
	delete[]array;
	array = buf;
}
void remove1(int*& array, int n) {
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size-1];
	for (int i = 0; i < n; i++) {
		buf[i] = array[i];
	}

	for (int i = n + 1; i < size; i++) {
		buf[i-1] = array[i];
	}
	delete[]array;
	array = buf;
}
void append1(int*& array, int index, int n) {
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size + 1];
	for (int i = 0; i < index; i++) {
		buf[i] = array[i];
	}
	buf[index] = n;
	for (int i = index; i < size; i++) {
		buf[i + 1] = array[i];
	}
	delete[] array;
	array = buf;
}
void appendarr(int*& array, int index, int*& array2) {
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array2) / sizeof(array2[0]);
	int* buf = new int[size2 + size1];
	for (int i = 0; i < index; i++) {
		buf[i] = array[i];
	}
	for (int i = 0; i < size2; i++) {
		buf[i + index] = array2[i];
	}
	for (int i = index; i < size1; i++) {
		buf[size2 + i] = array[i];
	}
	delete[] array;
	array = buf;
}
void removearr(int*& array, int*& array2) {
	int counter = 0;
	int size1 = _msize(array) / sizeof(array[0]);
	int size2 = _msize(array2) / sizeof(array2[0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (array[i] = array2[i][j])counter++;
		}
	}
	
}
int main()
{
	setlocale(LC_ALL, "rus");
	int* array = new int[6]{1,2,3,4,5,6};
	int* array2 = new int[3]{1,4,2};
	//append(array, 3);
	//sa(array);
	//remove(array);
	//sa(array);
	//remove1(array, 3);
	//sa(array);
	//append1(array, 2, 11);
	sa(array);
	appendarr(array, 3, array2);
	sa(array);
}