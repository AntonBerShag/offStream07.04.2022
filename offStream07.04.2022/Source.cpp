#include <iostream>
#include <fstream> // ����������, ����������� ������ � �������� �������
#include <string>
using namespace std;

int statistic(string& str) {
	ofstream out;
	out.open("statistics.txt", ios::app);
	if (out.is_open()) {
		out << str << " " << str.length() << "\n";
		out.close();
		return 0;
	}
	out.close();
	return -1;
}

int main() {
	setlocale(LC_ALL, "Russian");

	//������ 1
	cout << "������ 1.\n������� �����: ";
	string word;
	cin >> word;
	cout << statistic(word) << endl;

	cout << "������� �����: ";
	cin >> word;
	cout << statistic(word) << endl;



	/*string path = "file.txt"; // ��� ��������� ����������, ���������� ���� � �����
	ofstream out; // ������ ������ ofstream, ���������� �� ������ ������
	out.open(path, ios::app); // ������������� ����� ������� out, ��� �� �������� ����� path � ������

	if (out.is_open()) { // �������� �� ��, �������� �� ��� ����
		cout << "���� ������ ��� ������\n";
		//out << "Hello world!\n";
		for (int i = 0; i < 3; i++) {
			string str;
			cout << "������� ������:\n";
			getline(cin, str);
			out << str << "\n"; // ���������� ������ �����
		}
	}
	else
		cout << "������ �������� �����\n";

	out.close(); // �������� �����


	ifstream in;
	in.open(path);

	if (in.is_open()) {
		cout << "���� ������ ��� ������\n";
		string str; // ������, � ������� ����� ������������ � ����
		//char sym;

		while (!in.eof()) {
			getline(in, str);
			cout << str << endl;
		}


		/ *while (!in.eof()) {
			in >> str;
			//str += sym;
			cout << str << endl;
		}* /
	}
	else
		cout << "������ �������� �����\n";
	in.close();

	if (remove("file.txt") == 0)
		cout << "���� ������\n";
	else
		cout << "������ �������� �����\n";*/
	

	return 0;
}