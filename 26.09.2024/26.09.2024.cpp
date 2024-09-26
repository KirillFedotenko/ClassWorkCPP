#include <iostream>
#include <string>
using namespace std;
struct Date
{
	int day;
	int month;
	int year;
};

struct Student
{
	string surname;
	string name;
	int group_number;
	Date birthday;
};

void print_date(Date& date)
{
	cout << date.day << '.' <<
		date.month << '.' << date.year << '\n';
}

void print_student(Student& student)
{
	cout << "Surname: " << student.surname << '\n';
	cout << "Name: " << student.name << '\n';
	cout << "Group: " << student.group_number << '\n';
}

int main()
{
	//setlocale(LC_ALL, "rus");
	Student students[10];
	Student student{ "Bim", "Bam", 2 };
	student.birthday.day = 5;
	student.birthday.month = 2;
	student.birthday.year = 2009;
	print_date(student.birthday);
}