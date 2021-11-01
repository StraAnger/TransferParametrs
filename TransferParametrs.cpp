#include <iostream>

//Прототим или объявление функции. Оно же Function Declaration
void exchange(int a, int b); //принимаемые параметры


int main() {
	using namespace std;
	int a = 2;
	int b = 3;

	cout << a << "\t" << b << endl;
	exchange(a, b); //передаваемые параметры. Это вызоа функции, или Function call
	cout << a << "\t" << b << endl;


	return 0;
}

//Function definition
void exchange(int a, int b) { //принимаемые параметры
	using namespace std;
	int buffer=a;
	a = b;
	b = buffer;

}