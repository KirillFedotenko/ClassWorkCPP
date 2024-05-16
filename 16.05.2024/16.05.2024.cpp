#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	//int a = 4;
	//cout << a;
	//cout << &a; //F0
	//int& la = a; //к ячейке F0 мы можем обращаться используя 'a' или 'la'
	//la += 2; //a=6; la=6
	//int* pa = &la;//F0
	//cout << &pa; // CO - адрес указателя
	//int* arr = new int[4]{1,2,3,4};
	//cout << sizeof(arr); //8 - размер памяти занимаемый указателем
	//cout << endl;
	//cout << _msize(arr);//16 - размер памяти занимаемый масивом
	//cout << sizeof(arr[0]);//4 - размер пямяти занимаемый один элеметов массива
	//int size = _msize(arr) / sizeof(arr[0]); // кол-во эл-ов в массиве
	//int* buf = new int[size + 1];
	//for (int i = 0; i < size; i++) {
	//	buf[i] = arr[i];
	//}
	//buf[size] = 23;//добав. нов. знач.
	//delete[]arr;
	//arr = buf;




	//int* arr = new int[10]{ 1,2,3,4,5,6,7,8,9,10};
	//for (int i = 0; i < 10; i++) {
	//	cout << arr[i] << " ";
	//}
	//cout << endl;
	//int size = _msize(arr) / sizeof(arr[0]);
	//int a, b;
	//cout << "кол-во элементов:";
	//cin >> a;
	//cout << endl << "с какого элемента:";
	//cin >> b;
	//int* buf = new int[size - a];
	//for (int i =0; i < b; i++) {
	//	buf[i]= arr[i];
	//}
	//for (int i = b + a; i < size; i++) {
	//	buf[i - a] = arr[i];
	//}
	//delete[]arr;
	//arr = buf;
	//size = _msize(arr) / sizeof(arr[0]);
	//for (int i = 0; i < size; i++) {
	//	cout << arr[i] << " ";
	//}
	//cout << endl;





	//int** arr = new int* [3];
	//int size = _msize(arr) / sizeof(arr[0]);

	//for (int i = 0; i < size; i++) {
	//	arr[i] = new int[2];
	//	for (int j = 0; j < 2; j++) {
	//		arr[i][j] = 1 + rand() % 9;
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl << endl;
	//int* ar2 = new int[2]{ 2,7 };
	//int** buf = new int* [size + 1];

	//for (int i = 0; i < size; i++){
	//	buf[i] = arr[i];
	//}
	//buf[size] = ar2;
	//delete[]arr;
	//arr = buf;
	//for (int i = 0; i < size+1; i++) {
	//	for(int j = 0; j < 2; j++) {
	//		cout << arr[i][j] << " ";
	//	}
	//	cout << endl;
	//}
}
