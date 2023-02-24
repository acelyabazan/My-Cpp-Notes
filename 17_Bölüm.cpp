#include <iostream>

int main() {

	setlocale(LC_ALL, "Turkish");

	// Switch Case Kontrol Yapısı:
	// switch() ile seçmeyi sağlarız. Switch zaten seçmek demek. switch kontrol yapısının içerisinde case kontrol yapısını içinde kullanırız.

	int herhangiBirGun;

	std::cout << "1 - 7 arasında ve 1 ile 7 dahil olan bir rakam giriniz:" << " ";

	std::cin >> herhangiBirGun;

	switch (herhangiBirGun) {
		case 1: 
			std::cout << "Pazartesi";
			break;
		case 2: 
			std::cout << "Salı";
			break;
		case 3:
			std::cout << "Çarşamba";
			break;
		case 4:
			std::cout << "Perşembe";
			break;
		case 5:
			std::cout << "Cuma";
			break;
		case 6:
			std::cout << "Cumartesi";
			break;
		case 7:
			std::cout << "Pazar";
			break;
		// Yukarıdaki seçenekler seçilmediğinde default kontrol yapısı devreye girer:
		default:
			std::cout << "Mevcut durumlar içerisinden hiç biri seçilmedi.";
	}

	return 0;
}