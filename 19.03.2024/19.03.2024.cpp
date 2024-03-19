#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
    const int SIZE = 10;
    int array[SIZE];
    int array2[SIZE];
    int array3[SIZE];
    int array4[SIZE];
    const int max = 20;
    const int min = 3;
    for (int i = 0; i < SIZE; i++) {
        array[i] = 1 + rand() % 9;
        array2[i] = array[i];
        array3[i] = array[i];
        array4[i] = array[i];
        cout << array[i] << " ";
    }
    cout << endl;
   /* int counter1 = 0;                                                                                                                                                                                                                                                                                                                                                                                                                                               

    for (int i = 0, flag; i < SIZE - 1; i++) {
        flag = true;
        for (int j = 0; j < SIZE - 1 - i; j++) {
            counter1++;
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
                flag = false;
            }
        }
        if (flag) break;
    }

    int counter2 = 0;
    for (int flag, min = 0, max = SIZE; min < max; ) {
        flag = true;
        for (int j = 0; j < max - 1; j++) {
            counter2++;
            if (array2[j] > array2[j + 1]) {
                swap(array2[j], array2[j + 1]);
                flag = false;
            }
        }
        if (flag) break;
        max--;
        for (int j = max; j > min + 1; j--) {
            counter2++;
            if (array2[j] < array2[j - 1]) {
                swap(array2[j], array2[j - 1]);
                flag = false;
            }
        }
        min++;
        if (flag) break;
    }


    for (int i = 0; i < SIZE; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "counter for bubble sort = " << counter1 << endl;
    cout << "counter for shaker sort = " << counter2 << endl;
    */
    /*for (int i = 1; i < SIZE; i++) {
        for (int j = i; j > 0; j--) {
            if (array3[j] < array3[j - 1]) {
                swap(array3[j], array3[j - 1]);
            }
            else break;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << array3[i] << " ";
    }
    cout << endl;*/
    /*int arrayBuf[max + 1]{};
    for (int i = 0; i < SIZE; i++) {
        arrayBuf[array4[i]]++;
    }
    for (int i = 0,k=0; i <= max; i++) {
        while (arrayBuf[i] > 0) {
            array4[k++] = i;
            arrayBuf[i]--;
        }
    }
    cout << endl << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << array4[i] << " ";
    }*/
    for (int i = 0; i < SIZE/2; i++) {
        cout << array4[i] << " " << array4[SIZE - i - 1] << " ";
    }
    if (SIZE %2)cout << array4[SIZE %2];
}