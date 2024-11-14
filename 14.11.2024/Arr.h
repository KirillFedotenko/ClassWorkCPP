#pragma once
#include <iostream>
using namespace std;
template <typename T>
class Arr
{
private:
	int size;
	int lenght;
	T* arr;
public:
	Arr();
	Arr(T, T*);

	int getSize();
	int getLenght();
	int* getArr();

	void printArr();
	void setSize(T);
	void setArr(T*);
	~Arr();

	

	





};

