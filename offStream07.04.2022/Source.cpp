#include <iostream>
#include <fstream> // библиотека, реализующая работу с файловой системы
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

	//Задача 1
	cout << "Задача 1.\nВведите слово: ";
	string word;
	cin >> word;
	cout << statistic(word) << endl;

	cout << "Введите слово: ";
	cin >> word;
	cout << statistic(word) << endl;



	/*string path = "file.txt"; // это строковая переменная, содержащая путь к файлу
	ofstream out; // объект класса ofstream, отвечающий за запись файлов
	out.open(path, ios::app); // инициализация полей объекта out, или же открытие файла path в режиме

	if (out.is_open()) { // проверка на то, открылся ли наш файл
		cout << "Файл открыт для записи\n";
		//out << "Hello world!\n";
		for (int i = 0; i < 3; i++) {
			string str;
			cout << "Введите строку:\n";
			getline(cin, str);
			out << str << "\n"; // добавление записи файла
		}
	}
	else
		cout << "Ошибка открытия файла\n";

	out.close(); // закрытие файла


	ifstream in;
	in.open(path);

	if (in.is_open()) {
		cout << "Файл открыт для чтения\n";
		string str; // строка, в которую будет записываться в файл
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
		cout << "Ошибка открытия файла\n";
	in.close();

	if (remove("file.txt") == 0)
		cout << "Файл удален\n";
	else
		cout << "Ошибка удаления файла\n";*/
	

	return 0;
}