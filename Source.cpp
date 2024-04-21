#include <iostream>
using namespace std;
#include "Array.h"

//Створіть клас Array.Клас Array — це клас динамічного масиву.
//Розмір масиву може бути переданий як параметр або
//заданий за допомогою виклику функції - члена.Клас повинен дозволяти заповнювати масив значеннями,
//відображати вміст масиву, змінювати розмір масиву, сортувати
//масив, визначати мінімальне і максимальне значення.
//Клас повинен містити набір конструкторів(конструктор
//копіювання обов’язковий), деструктор.
//Додати в клас Array конструктор переміщення.



int main()
{
	Array arr(5);
	arr.fillArray();
	arr.printArray();
	arr.sortArr();
	arr.printArray();
	Array arr2(move(arr));
	arr.printArray();
	arr2.printArray();
	cout << "Min in array: " << arr2.minInArr() << endl;
	cout << "Max in array: " << arr2.maxInArr() << endl;
	return 0;
}