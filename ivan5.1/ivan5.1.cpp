// ivan 5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//1. Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл


#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float b, k;
	cout << "Введите кол-во байт :) " << endl;
	cin >> b;
	k = b / 1000;
	k = trunc(k);
	cout << "Кол-во полных килобайт = " << k << endl;

	return 0;
}