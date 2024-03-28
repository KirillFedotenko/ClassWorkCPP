#include <iostream>
#define random(a,b) a+rand()%(b+1-a)
using namespace std;

int main()
{
    srand(time(NULL));                                      //принцип работы;
    setlocale(LC_ALL, "rus");             //a[8] f05
    //int a = 8;                          //pa[f05]f09
    //cout << &a << endl;                 //cout << pa //f05
    //int* pa = &a;                       //cout << &pa//f09
    //cout << *pa;                        //cout << *pa //8


    ////zadanie 1
    //int a = 8;
    //int b = 9;
    //int* pa = &a;
    //int* pb = &b;
    //cout << ((*pa > *pb) ? *pa : *pb);


    ////zadanie 2
    //int a;
    //cin >> a;
    //int* pa = &a;
    //if (*pa > 0) {
    //    cout << "число положительное";
    //}
    //else if (*pa < 0) {
    //    cout << "число отрицательное";
    //}
    //else
    //    cout << "это ноль";



    ////zadanie 3
    //int a,b;
    //cin >> a >> b;
    //int* pa = &a;
    //int* pb = &b;
    //cout << a <<" " << b << endl;
    //swap(*pa, *pb);
    //cout << *pa << " " << *pb;


    ////zadanie 4
    //int a, b;
    //char c;
    //cin >> a >> b;
    //cin >> c;
    //int* pa = &a;
    //int* pb = &b;
    //char* pc = &c;
    //if (*pc == '+') {
    //    cout << *pa + *pb;
    //}
    //else if (*pc == '-') {
    //    cout << *pa - *pb;
    //}
    //else if (*pc == '*') {
    //    cout << *pa * *pb;
    //}
    //else
    //    cout << *pa / *pb;



    //int arr[10];
    //int sum = 0;
    //int* psum = &sum;
    //int* parr = arr;
    //for (int i = 0; i < 10; i++) {
    //    *(parr +i) = 1 + rand() % 101;
    //    cout << *(parr + i) << " ";
    //}
    //cout << endl;
    //for (int i = 0; i < 10; i++) {
    //    sum += *(parr + i);
    //}
    //cout << *psum;


 /*   int size;
    cin >> size;
    int* arr1 = new int[size];
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 10;
        arr2 = arr;
        if (arr2[i] % 2 );
        else if (arr2[i] % 2 != 0 || arr2[i] == 0) {
            cout << arr2[i] << " ";
        }
    }*/




    //int arr[]{ 1,2,3,4,5,6,7,8,9,10 };
    //int size = sizeof(arr) / sizeof(arr[0]);
    //int size2 = 0;
    //for (int i = 0; i < size; i++) {
    //    if (arr[i] % 2 == 0) {
    //        size2++;
    //    }
    //}
    //int* arr2 = new int[size2];
    //for (int i = 0, k =0; i < size; i++) {
    //    if (arr[i] % 2 == 0) {
    //        arr2[k++] = arr[i];
    //    }
    //}
    //for (int i = 0; i < size; i++) {
    //    cout << arr[i] << " ";
    //}
    //cout << endl;
    //for (int i = 0; i < size2; i++) {
    //    cout << arr2[i] << " ";
    //}




 /*1)   10 до 99
 2)   0 до размера 1ого масива
 3)   элементы которые которые остались в первом масиве после удаление значений повторяющихся во втором масиве*/

int array[] = { 1,2,4,2,5,2,5,7,3,67,2,8 };
int size = sizeof(array) / sizeof(array[0]);
int size2 = random(0, size - 1);
int* array2 = new int[size2];
for (int i = 0; i < size2; i++) {
    array2[i] = random(0, size - 1);
}
int size3 = 0;
for (int i = 0, flag; i < size; i++) {
    flag = true;
    for (int j = 0; j < size2; j++) {
        if (array2[j] == i) {
            flag = false;
            break;
        }
    }
    if (flag) size3++;
}
int* array3 = new int[size3];

for (int i = 0, k = 0, flag; i < size; i++) {
    flag = true;
    for (int j = 0; j < size2; j++) {
        if (array2[j] == i) {
            flag = false;
            break;
        }
    }
    if (flag) array3[k++] = array[i];
}

for (int i = 0; i < size; i++) cout << array[i] << " ";
cout << endl;
for (int i = 0; i < size2; i++) cout << array2[i] << " ";
cout << endl;
for (int i = 0; i < size3; i++) cout << array3[i] << " ";


   

    

}