#include <iostream>

//�������� ��� ���������� �������. ��� �� Function Declaration
void exchange(int a, int b); //����������� ���������


int main() {
	using namespace std;
	int a = 2;
	int b = 3;

	cout << a << "\t" << b << endl;
	exchange(a, b); //������������ ���������. ��� ����� �������, ��� Function call
	cout << a << "\t" << b << endl;


	return 0;
}

//Function definition
void exchange(int a, int b) { //����������� ���������
	using namespace std;
	int buffer=a;
	a = b;
	b = buffer;

}