#include <iostream>

int main() {
	setlocale(LC_ALL, "Turkish");

	// for döngüsünde ram üzerinde geçici değişken oluşturuyoruz, koşulunu belirliyoruz ve bundan sonra ne yapılması gerektiğini belirliyoruz:

	int tekSayilarinToplami = 0;
	int ciftSayilarinToplami = 0;

	for (int i = 100; i > 0;) {

		do {
			if (i % 2 == 0) {
				std::cout << i << " Çift sayıdır" << std::endl;
				tekSayilarinToplami += i;
			}
			else if (i % 2 == 1) {
				std::cout << i << " Tek sayıdır" << std::endl;
				ciftSayilarinToplami += i;
			}
			i--;
		} while (i > 0); {
			std::cout << "Tek sayıların toplamı: " << tekSayilarinToplami << std::endl;
			std::cout << "Çift sayıların toplamı: " << ciftSayilarinToplami << std::endl;
		}
	}

	return 0;
}