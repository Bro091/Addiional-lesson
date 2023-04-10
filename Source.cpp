#include <iostream>

void factorial(int* num) {
	int tmp = *num;
	for (int i = 1; i < tmp; i++)
		*num *=  i; 
}

template <typename T>
void print_arr(T arr[], const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

int& arr_max(int arr[], const int length) {
	int index_of_max = 0;
	for (int i = 1; i < length; i++)
		if (arr[i] > arr[index_of_max])
			index_of_max = i;
	return arr[index_of_max];
}

int main(){
	setlocale(LC_ALL, "Russian");
	int n;

	//Задача 1
	/*const int size = 5;
	int arr[size]{ 1, 2, 3, 4, 5 };
	std::cout << "Изначальный массив: \n";
	for (int i = 0; i < size; i++)
		std::cout << *(arr + i) << ' '; // arr[i] - *(arr + i) // подсказка к задаче 3 в дз 23
	std::cout << std::endl;

	for (int i = 0; i < size - 1; i += 2)
		std::swap(*(arr + i), *(arr + i + 1));

	std::cout << "Итоговый массив: \n";
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;*/

	// Задача 2. Факториал
	/*std::cout << "Введите число -> ";
	std::cin >> n;
	factorial(&n);
	std::cout << "Факториал: " << n << "\n\n";*/

	//Задача 3. 
	std::cout << "Изначальный массив: \n";
	const int size3 = 6;
	int arr3[size3]{ 5, -2, 10, 7, 8, 7 };
	print_arr(arr3, size3);
	std::cout << "Max " << arr_max(arr3, size3) << std::endl;


	return 0;
	}