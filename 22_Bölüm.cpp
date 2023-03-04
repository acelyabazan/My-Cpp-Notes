#include <iostream>

int main() {
	setlocale(LC_ALL, "Turkish");

	int n;
	int tekSayilarinToplami = 0;
	int ciftSayilarinToplami = 0;

	std::cout << "Lütfen tam sayı giriniz: ";
	std::cin >> n;

	if (std::cin.fail() || std::cin.eof()) { // Kullanıcının girdiği değer tam sayı değilse:

		std::cout << "Lütfen tam sayı giriniz!" << std::endl;

	}
	else {
		do {
			if (n % 2 == 0) {
				std::cout << n << " Çift sayıdır." << std::endl;
				tekSayilarinToplami += n;
			}
			else if (n % 2 == 1) {
				std::cout << n << " Tek sayıdır." << std::endl;
				ciftSayilarinToplami += n;
			}
			n--;
		} while (n > 0); {
			std::cout << "Tek sayıların toplamı: " << tekSayilarinToplami << std::endl;
			std::cout << "Tek sayıların toplamı: " << ciftSayilarinToplami << std::endl;
		}
	}

	return 0;
}