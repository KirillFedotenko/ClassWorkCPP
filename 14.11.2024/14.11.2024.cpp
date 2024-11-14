#include <iostream>
#include "Arr.h"
using namespace std;

template <typename T>
T sum(T val) {
	return val;
}
template <typename T>
T avg(T* arr, int size) {
	T sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	sum /= size;
	return sum;
}
int main()
{
	Arr<int> arr();

}
