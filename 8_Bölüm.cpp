#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	float kupKenar;

	cout << "Küpün Bir Kenar Uzunluğunu Girin:" << " ";
	cin >> kupKenar;

	float yuzeyAlani = 6 * (kupKenar * kupKenar);
	float hacim = kupKenar * kupKenar * kupKenar;

	cout << "Küpün Yüzey Alanı:" << " " << yuzeyAlani << endl;
	cout << "Küpün Hacimi:" << " " << hacim << endl;

	return 0;
}