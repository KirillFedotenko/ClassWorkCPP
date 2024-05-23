#include <iostream>
using namespace std;
#define min(a,b) ((a<b)?cout << a: cout << b)
#define max(a,b) ((a<b)?cout << b: cout << a)
#define sq(a) cout << a*a;
#define degree(a,b) for(int i = 1, k=a; i<b;i++,a*=k)a
#define rand(min,max)min +rand() %(max-min+1)
#define max3(a,b,c) if(a>b&& a>c)cout << a; else if (b>c) cout << b; else cout << c;
void swa(char strt[]) {
	int size2 = 0;
	for (; strt[size2] != '\0'; size2++);
	for (int i = 0; i < size2 / 2; i++) {
		swap(strt[i], strt[size2 - 1 - i]);
	}
}
void count(char strt[]) {
	int size = 0;
	int c = 0;
	for (; strt[size] != '\0'; size++);
	for (int i = 0; i < size; i++) {
		if (strt[i] >= 48 && strt[i] <= 71)c++;
	}
	cout << c;
}
int countWord(char strt[]) {
	int count = 0;
	int k = 0;
	for (; strt[k] == ' ' && strt[k] != '\0'; k++);
	for (int i = k; strt[i] != '\0'; i++) {
		if (strt[i] != ' ' && strt[i + 1] == '\0') count++;
		if (strt[i] == ' ' && strt[i + 1] != ' ') count++;
	}
	return count;

}
int main() {
	srand(time(NULL));
	//min(4, 2);
	//cout << endl;
	//max(5, 1);
	//cout << endl;
	//sq(5);
	//cout << endl;
	//int a = 2;
	//degree(a, 5);
	//cout << a << endl;
	//cout << rand(1, 10);
	//cout << endl;
	//max3(1, 4, 2)

	char strt[] = "qwer wqd qwgdyiqwgdyiqwg    qw3uifgqyugfuiq  werifqeyoiggyi wwefwfr gyigi qefiriir ";
	cout << strt << endl;
	cout << countWord(strt);

	
}