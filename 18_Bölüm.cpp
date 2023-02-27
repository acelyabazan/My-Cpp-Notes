#include <iostream>

int main() {

	setlocale(LC_ALL, "Turkish");

	int secenek;

	int arttırma;
	int azaltma;

	int stok;

	std::cout << "Stok sayısını giriniz: ";
	std::cin >> stok;

	if (stok > 0) {
		std::cout << "Arttırmak için --> 0" << std::endl;
		std::cout << "Azaltmak için  --> 1" << std::endl;
	}
	else {
		std::cout << stok << " adet stoğunuz bulunmaktadır. 0 veya 0'dan az stoğunuz bulunamaz!";

		// Bu kod çok verimli değil fakat daha çok bilgim olmadığı için kullanmak durumunda kaldım.
		exit(1);
	}

	std::cout << "İşlem numarasını giriniz: ";
	std::cin >> secenek;

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
	
	return 0;
}
