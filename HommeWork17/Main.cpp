#include <iostream>

double mean(int num1,int num2) {
	double result = double(num1 + num2) / 2;
	return result;
}

double mean_arr(int arr[], const int lenght) {
	double result{};
	for (int i = 0; i < lenght; i++)
		result += arr[i];
	result /= lenght;
	return result;
}

void powers(int num1, int num2) {
	int result = 1;
	for (int i = 0; i < num2; i++) {
		result = result;
		std::cout << result << ", ";
		result*=num1;
	}
	std::cout << "\b\b ";	
}

void positive_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++) {
		if (arr[i] < 0)
			arr[i] = -arr[i];
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n{}, m{};

	/*
	Задача №1. Создайте функцию mean, которая возвращает среднее арифметическое двух переданных в неё чисел.
	*/

	std::cout << "Задача №1.\nВведите два числа -> ";
	std::cin >> n >> m;
	std::cout << "Среднее арифметическое " << n << " и " << m << " = " << mean(n, m) << "\n\n";

	/*
	Задача №2. Создайте функцию mean_arr. Она принимает массив и его длину, после чего возвращает среднее 
	арифметическое всех его элементов.
	*/

	std::cout << "Задача№2\nИзначальный массив:\n";
	const int size = 5;
	int arr[size]{ -1, 3, -5, 7, -8 };
	std::cout << "{ ";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
	std::cout << "Среднее арифметическое элиментов массива = " << mean_arr(arr, 5) << "\n\n";

	/*
	Задача №3. Создайте функцию powers(N, M), которая принимает два числовых значения. Функция должна 
	выводить в консоль все степени числа N от степени 0 достепени M включительно.
	*/

	std::cout << "Задача №3.\nВведите число и его степень -> ";
	std::cin >> n >> m;
	std::cout << "Степени числа " << n << " от " << "0 до " << m << " : ";
	powers(n, m);
	std::cout << "\n\n";

	/*
	Задача №4. Создайте функцию positive_arr, которая принимает массив и его длину, после чего меняет в 
	нём все отрицательные значения на положительные. Сами положительные числа никак меняться не должны.
	*/

	std::cout << "Задача№4\nИзначальный массив:\n";
	std::cout << "{ ";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
	positive_arr(arr, size);
	std::cout << "Измененный массив:\n{ ";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";

	return 0;
}