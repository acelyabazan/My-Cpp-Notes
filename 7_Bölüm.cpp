#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	float pi = 3.14;
	float r;

	cout << "Dairenin Yarı Çapını Giriniz:" << " ";
	cin >> r;

	float cevre = 2 * pi * r;
	float alan = pi * (r * r);

	cout << "Dairenin Çevresi:" << " " << cevre << endl;
	cout << "Dairenin Alanı:" << " " << alan << endl;
}