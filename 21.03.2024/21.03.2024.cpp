#include <iostream>
using namespace std;
void showline(int n) {
	if (n < 0) {
		for (int i = 0; i >= n; i--) {
			cout << i << " ";
		}
	}
	else {
		for (int i = 0; i <= n; i++) {
			cout << i << " ";
		}
	}
}
void deistvie(int p, int c) {
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < c; j++) {
			cout << "* ";
		}cout << endl;
	}
}
void factorial(int m) {
	int fac=1;
	for (int i = 1; i <= m; i++) {
		fac *= i;
	}
	cout << fac;

}
int tk3(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int tk4(int a, int b, int c, int d, int e) {
	int k = 0;
	if (a < b)a = b;
	if (a < c)a = c;
	if (a < d)a = d;
	if (a < e)a = e;
	return a;
}

int tk4(int a1, int b2) {
	return((a1 > b2) ? a1 : b2);
}

int tk5(int a) {
	return a * a * a;
}

bool tk6(int a) {
	return a > 0;
}


int mySwap(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}
float mySwap(float& a, float& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}
double mySwap(double& a, double& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

void tk10(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 9; j < n; j++) {
			if (j == i || i == n - 1 - j)cout << "* ";
			else cout << "  ";
		}cout << endl;
	}
}


























int main()
{
	setlocale(LC_ALL, "rus");
/*	deistvie(5, 6);
	factorial(4);
	cout << endl;
	cout << tk4(8,4) << endl;
	cout << tk3(5)<< endl;
	cout << tk5(5) << endl;
	cout << tk6(-1)*/;


//	float a = 1.0;
//	float b = 2.0;
//	mySwap(a,b);
//	cout << a << " " << b;
	tk10(7);
 
}