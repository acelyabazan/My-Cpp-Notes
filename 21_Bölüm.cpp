#include <iostream>

int main() {
	setlocale(LC_ALL, "Turkish");

	// do while döngüsünün farkı ilk önce do'nun içerisini yapar ondan sonra while döngüsüne başlar.
	// Örneğin:

	int sayi;

	std::cout << "Lütfen bir tam sayı giriniz: ";
	std::cin >> sayi;

	do {
		std::cout << sayi << std::endl;
		sayi--;

	} while (sayi > 0); {

	}

	return 0;
}