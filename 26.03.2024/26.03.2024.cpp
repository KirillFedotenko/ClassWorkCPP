#include <iostream>
using namespace std;
void arr(int array[], int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
}
int minel(int array[], int size) {
	int min = array[0];
	int index = 0;
	for (int i = 1; i < size; i++) {
		if (min > array[i]) {
			min = array[i];
			index = i;
		}
	}
	return index;
}



void rev(int array1[], int array2[], int size) {
	for (int i = 0; i < size; i++) {
		array2[size - 1 - i] = array1[i];
	}
}


void fil(int array[], int size, int min = 0, int max = 9) {
	for (int i = 0; i < size; i++) {
		array[i] = min + rand() % (max + 1 - min);
	}
}

int main()
{
	//int array1[] = { 3,2,4,23,5,2 };
	//int array2[] = {4,2,5,7,8,9};
	//int size = 6;
	///*int size = sizeof(array) / sizeof(array[0]);*/
	///*arr(array1, size);
	//cout << endl;
	//cout << minel(array1, size)*/;
	//rev(array1, array2, size);

	cout << "imput number:" << endl << endl;
	int num1, num2;
	cin >> num1 >> num2;
	char field[8][8];
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == j % 2) {
				field[i][j] = 219;
			}
			else field[i][j] = ' ';
		}
	}
	field[num1][num2] = '@';
	for (int i = num1 - 1,j = num2 -1; i >= 0&& j >= 0; i--,j--) {
		field[i][j] = '*';
	}
	for (int i = num1 - 1, j = num2 - 1; i >= 0 && j >= 0; i++, j++) {
		field[i][j] = '*';
	}
	cout << "   a b c d e f g h" << endl;
	for (int i = 0; i < 8; i++) {
		cout << i + 1 << " ";
		for (int j = 0; j < 8; j++) {
			cout << field[i][j] << field[i][j];
		}
		cout << endl;
	}
}




