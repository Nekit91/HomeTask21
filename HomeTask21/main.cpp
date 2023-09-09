#include<iostream>





int main() {
	setlocale(LC_ALL, "RU");

	std::cout << "Домашнее задание №21\nЗАДАЧА 1\n";
	int x, y;
	std::cout << "Введите первое число ->";
	std::cin >> x;
	std::cout << "Введите второе число ->";
	std::cin >> y;
	int* px = &x;
	int* py = &y;
	int temp = *px;
	*px = *py;
	*py = temp;
	std::cout << "Первое число = " << x << "\n";
	std::cout << "Второе число = " << y << "\n";





























	return 0;
}