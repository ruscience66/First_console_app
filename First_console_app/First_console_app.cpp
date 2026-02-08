// First_console_app.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <windows.h>
#include <iostream>
#include <string>

//Разрешение использовать все элементы из пространства имён std (standard) без указания префикса std::
using namespace std;

//Объявление функции вывода приветственного сообщения
void message(const string& name) {
	cout << "Рад тебя видеть, "s << name << ". Хорошего дня!"s;
}


int main()
{
	//Ожидание ввода в кодировке Windows - 1251 (кириллица)
	SetConsoleCP(1251);

	//Вывод в кодировке Windows - 1251 (кириллица)
	SetConsoleOutputCP(1251);

	// Установка русской локали для корректного вывода текста
	setlocale(LC_ALL, "Russian");

	//Объявление строковой переменной
	string name;

	//Вывод теста со сменой строки
	cout << "Привет! Напиши своё имя:\n"s;

	//Считывание переменной name
	cin >> name;

	//Вызов функции вывода приветственного сообщения
	message(name);

	return 0;
}