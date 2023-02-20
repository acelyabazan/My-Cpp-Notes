#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	int kenar;

	cout << "Lütfen Kenar Uzunluğunu Giriniz:" << " ";
	cin >> kenar;

	int cevre = kenar * 4;
	int alan = kenar * kenar;

	cout << "Karenin Çevresi:" << " " << cevre << endl;
	cout << "Karenin Alanı:" << " " << alan << endl;

	return 0;
}