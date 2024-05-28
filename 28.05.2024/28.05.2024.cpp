#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//int countWord(string str) {
//	int count = 0;
//	int k = 0;
//	for (; str[k] == ' ' && str[k] != '\0'; k++);
//	for (int i = k; str[i] != '\0'; i++) {
//		if (str[i] != ' ' && str[i + 1] == '\0')count++;
//		if (str[i] == ' ' && str[i + 1] != ' ')count++;
//	}
//	return count;
//}

//int countWordInFile(string path) {
//	string buf;
//	int count = 0;
//	ifstream in(path);
//	if (in.is_open()) {
//		while (getline(in, buf)) {
//			count += countWord(buf);
//		}
//	}
//	else cout << "file not found";
//	in.close();
//	return count;
//}

void copyFile(string path) {
	string path2 = "";
	for (int i = 0; i < path.length() - 4; i++) {
		path2 += path[i];
	}
	path2 += "(copy).txt";
	string buf;
	string result = "";
	ifstream in(path);
	ofstream out(path2);
	if (in.is_open()) {
		while (getline(in, buf)) {
			out << buf << "\n";
		}
	}
	in.close();
	out.close();

}

void codeFile(string path, int key) {
	string path2 = "";
	for (int i = 0; i < path.length() - 4; i++) {
		path2 += path[i];
	}
	path2 += "(code).txt";
	string buf;
	string result = "";
	ifstream in(path);
	ofstream out(path2);
	if (in.is_open()) {
		while (getline(in, buf)) {
			string str = "";
			for (int i = 0; i < buf.length(); i++) {
				str += buf[i] + key;
			}
			out << str + "\n";
		}
	}
	in.close();
	out.close();

}

int main()
{
	copyFile("saved\\Biba.txt");
	codeFile("saved\\Biba.txt", 2);
}