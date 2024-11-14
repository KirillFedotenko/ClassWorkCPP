#include "Arr.h"
template <typename T>
Arr<T>::Arr(){}
template <typename T>
Arr<T>::Arr(T size, T* arr)
{
	this->size = 10;
	this->lenght = size;
	this->arr = new T[size];
}
template <typename T>
int Arr<T>::getSize()
{
	return this->size;
}
template <typename T>
int Arr<T>::getLenght()
{
	return this->lenght;
}
template <typename T>
int* Arr<T>::getArr()
{
	return this->arr;
}
template <typename T>
void Arr<T>::printArr()
{
	for (T i = 0; i < this->size; i++) {
		cout << this->arr[i];
	}
	cout << endl;
}
template <typename T>
void Arr<T>::setSize(T)
{
	this->size = size;
}
template <typename T>
void Arr<T>::setArr(T*)
{
	this->arr = arr;
}
template <typename T>
Arr<T>::~Arr()
{
}
