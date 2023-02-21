#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	float a, b, c, x;

	cout << "Lütfen 'a' değerini giriniz:" << " ";
	cin >> a;

	cout << "Lütfen 'b' değerini giriniz:" << " ";
	cin >> b;

	cout << "Lütfen 'c' değerini giriniz:" << " ";
	cin >> c;

	cout << "Lütfen 'x' değerini giriniz:" << " ";
	cin >> x;

	float denklem = (a * (x * x)) + (b * x) + c;

	cout << "ax² + bx + c =" << " " << denklem << endl;

	return 0;
}