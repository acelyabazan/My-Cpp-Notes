#include <iostream>

int main() {

	setlocale(LC_ALL, "Turkish");

	std::cout << "Arttırmak için --> 0" << std::endl;
	std::cout << "Azaltmak için --> 1" << std::endl;

	int secenek;

	int arttırma;
	int azaltma;

	int stok;

	std::cout << "Stok sayınızı giriniz: ";
	std::cin >> stok;

	std::cout << "İşlem numarasını giriniz: ";
	std::cin >> secenek;


	if (stok > 0) {

		if (secenek == 0 || secenek == 1) {

			switch (secenek) {

			case 0:
				std::cout << "Stoğunuzu ne kadar arttırmak istiyorsunuz: ";
				std::cin >> arttırma;

				int yeniStokSayisi;
				yeniStokSayisi = stok + arttırma;
				std::cout << "Güncel stok sayınız: " << yeniStokSayisi;
				break;

			case 1:
				std::cout << "Stoğunuzu ne kadar azaltmak istiyorsunuz: ";
				std::cin >> azaltma;

				int yeniStokSayisi2;
				yeniStokSayisi2 = stok - azaltma;
				std::cout << "Güncel stok sayınız: " << yeniStokSayisi2;
				break;
			}
		}
		else {
			std::cout << "Lütfen doğru işlem numarasını girin!";
		}	
	}
	else {
		std::cout << stok << " adet stoğunuz bulunmaktadır. 0 veya 0'dan az stoğunuz bulunamaz!";
	}
	
	return 0;
}