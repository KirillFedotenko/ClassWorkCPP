#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	//    int c;
	//    int b=0;
	//    cin >> c;
	//    while (b <= c) {
	//        cout << b++ << " " ;
	//    }





		//int a, b, c;
		//cin >> a;
		//cin >> b;
		//cin >> c;
		//if (a>b) swap(a, b);
		//while (a <= b) {
		//	if (a % c == 0) cout << a << " ";
		//	a++;
		//}


		//int a, b, c=0;
		//cin >> a >> b;
		//if (a>b) swap(a, b);
		//while (a <= b) {
		//	if (a % 2==0) {
		//		c = c + a;
		//	}
		//	a++;
		//}
		//cout << c << " ";




		//int a, b,c=1,sum;
		//cin >> a;
		//cin >> b;
		//if (a>b) swap(a, b);
		//cout << (b + a) / 2;


		//int a, sum = 0;
		//cin >> a;
		//while (a != 0) {
		//	sum += a;
		//	cin >> a;
		//}
		//cout << sum;
		//




		//

		//int a, b, c;
		//cin >> a;
		//cin >> b;
		//if (a>b) swap(a, b);
		//do {
		//	cout << a++ << " ";

		//} while (a <= b);



	/*int a, b, c;
	cin >> a >> b;
	if (a > b) swap(a, b);
	cin >> c;
	do {
		cin >> c;
	} while (c < a || c > b);*/


	int a = 1, b;
	float sum = 0;
	cout << "1)Помидор - 10 руб" << endl;
	cout << "2)Огурец - 8 руб" << endl;
	cout << "3)Плэйстэйшен 5 - 59 999 руб" << endl;
	cout << "4)картошка - 5 руб" << endl;
	cout << "5)Лук - 11 руб" << endl;
	while (a > 0) {
		cin >> a;
		if (a == 1) {
			sum += 10;
		}
		else if (a == 2) {
			sum += 8;
		}
		else if (a == 3) {
			sum += 59999;
		}
		else if (a == 4) {
			sum += 5;
		}
		else if (a == 5) {
			sum += 11;
		}
		else if (a < 0 || a>5) {
			cout << "У нас нет такого товара";
		}
		
	}
		cout << "Введите скидку в %:";
		cin >> b;
		if (b < 0 || b>100) {
			cout << "такой скидки нет";
		}
		cout << "Итого к оплате:";
		cout << sum-(sum/100*b) << "руб";
}
