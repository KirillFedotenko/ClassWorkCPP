#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
  /*  int a, b;
    cin >> a;
    cin >> b;
    if (a > b)swap (a, b) ;
    for (int i = a; i < b + 1; i++) {
        if(i%2 == 0){
            cout << i << " ";
        }    
    }*/


    //int a, b;
    //int c = 0;
    //cin >> a >> b;
    //if (a > b)swap (a, b) ;
    //for (int i = a; i < b + 1; i++) {
    //    if (i % 5 == 0) {
    //        c += i;
    //    }
    //
    //}
    //cout << c;

    /*int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i == 0 || j == 0 || i == a - 1 || j == a - 1) {
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
    }*/
   /* int min, max;
    const int SIZE = 10;
    int a[SIZE];
    cin >> min >> max;
    for (int i = 0; i < 10; i++) {
        a[i] = min + rand() % (max + 1 - min);
        cout << a[i] << " ";
        
    }
    cout << endl;
    for (int i = 0; i < SIZE / 2; i++) {
        swap(a[i], a[SIZE - 1 - i]);
    }
    cout << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    int ind = 0;
    for (int i = 1; i < SIZE; i++) {
        if (a[ind] > a[i]) ind = i;
    }
    cout << ind;*/

    /*int array[5][8]{};
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 8; j++) {
            array[i][j] = 2 + rand() % (5 + 1 - 2);
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
*/


    const int ROW = 4;
    const int COL = 3;
    int arr[ROW][COL]{};

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            arr[i][j] = 1 + rand() % 9;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;
    for (int i = 0, sum; i < ROW; i++) {
        sum = 0;
        for (int j = 0; j < COL; j++) {
            cout << arr[i][j] << " ";
            sum += arr[i][j];
        }
        cout << " | " << sum;
        cout << endl;
    }

    cout << endl << endl;
    int result = 0;
    for (int j = 0, sum; j < COL; j++) {
        sum = 0;
        for (int i = 0; i < ROW; i++) {
            sum += arr[i][j];
           
        }
        cout << sum << " ";
        result += sum;
    }
    cout << result;
}
