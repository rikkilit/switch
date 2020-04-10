// switch.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "rus");
	int count; // переменная для выбора в switch
	int a, b; // переменные для хранения операндов
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Выберите действие: 1-сложение; 2-вычитание; 3-умножение; 4-деление: ";
	cin >> count;
	switch (count) // начало оператора switch
	{
	case 1: // если count = 1
	{
		cout << "Функция в разработке"<<endl ; // выполнить сложение
		break;
	}
	case 2: // если count = 2
	{
		cout << "Функция в разработке"<<endl; // выполнить вычитание
		break;
	}
	case 3: // если count = 3
	{
		cout << "Функция в разработке"<<endl; // выполнить умножение
		break;
	}
	case 4: // если count = 4
	{
		cout << "Функция в разработке"<<endl; // выполнить деление
		break;
	}
	default: // если count равно любому другому значению
		cout << "Неправильный ввод" << endl;
	}
	system("pause");
	return 0;
}