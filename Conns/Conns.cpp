#include <iostream>
#include <Windows.h>
using namespace std;
char NameTAB[40];

void Names(char a[]) {
	cout << "Введите название таблицы.\n";
	cin >> a;
	cout << "Вы ввели:\n";
	cout << a;
}
void TAB() {
	int width = 79 + 9;
	cout << "\n";
	cout.width(width);
	cout.fill('-');
	//cout << left << "Сельскохозяйственные культуры\n";
	//cout.width(width);
	//cout.fill('-');

}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	TAB();
}

