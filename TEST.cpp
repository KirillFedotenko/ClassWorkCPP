#include <iostream>
#include <string>
#define push
using namespace std;
void showARR(int** arr) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}
void copy(int** arr, int** arr2) {\
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			arr2[i][j] = arr[i][j];
		}
	}
}
void add8(int* arr, int* buf, int index, int num) {
	int size = _msize(arr) / sizeof(arr[0]);
	for (int i = 0; i < index - 1 ; i++) {
		buf[i] = arr[i];
	}
	buf[index] = num;
	for (int i = index; i < size; i++) {
		buf[i] = arr[i];
	}
	delete arr;
	arr = buf;
}
void zd8(int** arr, int** buf, int index) {
	int size1 = _msize(arr) / sizeof(arr[0]);
	int size2 = _msize(arr[0]) / sizeof(arr[0][0]);
	for (int i = 0; i < index; i++) {
		for (int j = 0; j < size2; j++) {
			buf[i][j] = arr[i][j];
		}
	}
	
	
}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
    //zadanie 1
 
	//int a, b, c, d;
	//cin >> a;
	//cin >> b;
	//cin >> c;
	//cin >> d;
	//if (a < b and a < c and a < d) cout << a;
	//else if (b < a and b < c and b < d) cout << b;
	//else if (c < a and c < b and c < d)cout << c;
	//else {
	//	cout << d;
	//}

	//zadanie 2

	//for (int i = 0; i >= -25; i -= 3) {
	//	cout << i << " ";
	//}


	//zadanie 3

	//int size;
	//cin >> size;
	//for (int i = 0; i < size; i++) {
	//	for (int j = i; j < size; j++) {
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}


	//zadanie 4

	//int a;
	//int count = 0;
	//int sum=0;
	//while (true){
	//	cin >> a;
	//	if (a != 0) {
	//		sum += a;
	//		count++;
	//	}
	//	else {
	//		break;
	//	}
	//}
	//cout << sum / count;
	

	//zadanie 6
	
	//int size1 = 4;
	//int size2 = 5;
	//int** arr = new int* [size1];
	//for (int i = 0; i < size1; i++) {
	//	arr[i] = new int[size2];
	//	for (int j = 0; j < size2; j++) {
	//		arr[i][j] = 0 + rand() % 90;
	//	}
	//}
	//cout << endl;
	//showARR(arr);
	//int sum1 = 0;
	//int sum2 = 0;
	//for

	//zadanie 7
	
	//int size1 = 4;
	//int size2 = 5;
	//int** arr = new int* [size1];
	//int** arr2 = new int* [size1];
	//for (int i = 0; i < size1; i++) {
	//	arr[i] = new int[size2];
	//	arr2[i] = new int[size2];
	//	for (int j = 0; j < size2; j++) {
	//		arr[i][j] = 0 + rand() % 90;
	//	}
	//}
	//showARR(arr);
	//cout << endl;
	//showARR(arr2);
	//copy(arr, arr2);
	//cout << endl;
	//showARR(arr);
	//cout << endl;
	//showARR(arr2);

	//zadanie 8
	
	//int size = 4;
	//int num;
	//int index;
	//cin >> index;
	//cin >> num;
	//int* arr = new int[size] {1, 2, 3, 4};
	//int* buf = new int[size + 1];
	//for (int i = 0; i < size; i++) {
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//
	//add8(arr, buf, index, num);
	//for (int i = 0; i < size + 1; i++) {
	//	cout << buf[i] << " ";
	//}


	//zadanie 9
	
	//int index;
	//int size1 = 4;
	//int size2 = 5;
	//cin >> index;
	//int** arr = new int* [size1];
	//for (int i = 0; i < size1; i++) {
	//	arr[i] = new int[size2];
	//}
	//int** buf = new int*[size1];
	//for (int i = 0; i < size1; i++) {
	//	buf[i] = new int[size2 + 1];
	//}



}
