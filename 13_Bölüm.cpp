#include <iostream>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Turkish");

	int sayi;

	std::cout << "Lütfen bir sayı giriniz:" << " ";
	std::cin >> sayi;

	if (sayi > 0) {
		std::cout << "Girmiş olduğunuz sayı:" << " " << sayi << " " << "pozitif bir sayıdır." << std::endl;
	}
	else if (sayi < 0) {
		std::cout << "Girmiş olduğunuz sayı:" << " " << sayi << " " << "negatif bir sayıdır." << std::endl;
	}
	else {
		std::cout << "Girmiş olduğunuz sayı:" << " " << sayi << std::endl;
	}

	return 0;
}