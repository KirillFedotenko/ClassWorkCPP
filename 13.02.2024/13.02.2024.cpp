#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");

    //числовые
    short a = 1;
    char a2 = 'a';
    bool s = true;
    bool f = 0;
    bool p = false;

    cout << "тип данных\t| макс значение\t\t| мин значение\t\t\t|кол-во байт\t| описание" << endl;
    cout << "short" << "\t\t";
    cout << "| " << SHRT_MAX << "\t\t\t";
    cout << "| " << SHRT_MIN << "\t\t";
    cout << "\t| " << sizeof(short) << "\t\t";
    cout << "| " << "целые числа" << endl;

    cout << "int" << "\t\t";
    cout << "| " << INT32_MAX << "\t\t";
    cout << "| " << INT32_MIN << "\t\t";
    cout << "\t| " << sizeof(int) << "\t\t";
    cout << "| " << "целые числа" << endl;

    cout << "long long" << "\t";
    cout << "| " << LLONG_MAX << "\t";
    cout << "| " << LLONG_MIN << "\t";
    cout << "\t| " << sizeof(long long) << "\t\t";
    cout << "| " << "целые числа" << endl;

    cout << "float" << "\t\t";
    cout << "| " << FLT_MAX << "\t\t";
    cout << "| " << FLT_MIN << "\t\t";
    cout << "\t| " << sizeof(float) << "\t\t";
    cout << "| " << "вещестыенные числа" << endl;

    cout << "double" << "\t\t";
    cout << "| " << DBL_MAX << "\t\t";
    cout << "| " << DBL_MIN << "\t\t";
    cout << "\t| " << sizeof(double) << "\t\t";
    cout << "| " << "вещестыенные числа" << endl;

    cout << "char" << "\t\t";
    cout << "| " << CHAR_MAX << "\t\t\t";
    cout << "| " << CHAR_MIN << "\t\t\t";
    cout << "\t| " << sizeof(char) <<"\t\t";
    cout << "| " << "символ" << endl;

    cout << "char" << "\t\t";
    cout << "| " << 1 << "\t\t\t";
    cout << "| " << 0 << "\t\t\t";
    cout << "\t| " << sizeof(char) << "\t\t";
    cout << "| " << "логический" << endl;




}

