// 29.02.2024.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	//zadanie 1

	/*int num, num1, num2, num3;
	cout << "Введите первое число:" << endl;
	cin >> num;
	cout << "Введите второе число:" << endl;
	cin >> num1;
	cout << "Введите третье число:" << endl;
	cin >> num2;
	cout << "Введите четвертое число:" << endl;
	cin >> num3;
	if (num > num1 && num > num2 && num > num3)cout << num;
	else if (num1 > num && num1 > num2 && num1 > num3)cout << num1;
	else if (num2 > num && num2 > num2 && num2 > num3)cout << num2;
	else
		cout << num3;*/

		//zadanie 2
		/*int a, b, n;
		cout << "Введите начало диапозона:";
		cin >> a;
		cout << "Введите конец диапозона:";
		cin >> b;
		cout << "Сколько раз вы хотите вывести все числа в диапозоне:";
		cin >> n;
		if (a > b) swap(a, b);

		for (int i = 0, c = a; i < n; i++) {
			cout << c++ << " ";
			if (c < b)c = a;
		}*/


		//zadanie 3
		//double max;
		//cout << "Введите макс значение:";
		//cin >> max;
		//for (double i = 0; i <= max; i += 0.25) {
		//	cout << i << " ";
		//}


		//zadanie 4
		/*double a=1, sum=0, c=0;
		do {
			cin >> a;
			sum+=a;
			c++;
			if (a < 0)cout << "Error";
		} while (a > 0);
		cout << (sum/(c-1));*/




		//zadanie 5
		/*string let;
		do {
			cout << "Введите букву:";
			cin >> let;
			if (let.size() > 1)cout << "Error";
		} while (let.size() > 1);
		char a = let[0];
		if (a > 64 && a < 91 || a>96 && a < 123)
			cout << "Это англ. буква";
		else
			cout << "Это не англ. буква";*/

			//zadanie 7
			//int a, b, n, c=1;
			//cout << "Введите начало диапозона:";
			//cin >> a;
			//cout << "Введите конец диапозона:";
			//cin >> b;
			//cout << "Введите число на которое будете делить:";
			//cin >> n;
			//if (a > b) swap(a, b);
			//for (a; a < b; a++) {
			//	if (a % n == 0)c++;
			//}
			//cout << c;


			//int n = 7;
			//for (int i = 0; i < n; i++) {
			//	for (int j = 0; j < n; j++) {
			//		if (i==j || i == n - 1 - j) cout << "*  ";
			//		else cout << "  ";
			//	}
			//	cout << endl;
			//}

	int n = 8;
	for (int i = 0; i < n; i++) {
		cout i + 1 << " ";
		for j = 0; l < n; j++){
		if (i % 2 == j % 2)cout << char(219);
		else cout << char(176) << char(176);
}
	cout << endl;
	}




}