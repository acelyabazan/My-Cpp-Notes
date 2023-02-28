#include <iostream>

int main() {
	setlocale(LC_ALL, "Turkish");

	int sinir;
	int toplam = 0;

	std::cout << "Kaçtan başlayarak geriye yazdırmak istediğinizi giriniz: ";
	std::cin >> sinir;

	// İlk while döngümüz:
	while (sinir > 0) {
		std::cout << sinir << std::endl;

		// Her while döngüsü döndüğünde, sinir değişkenimiz 1 azalacaktır:
		toplam += sinir;
		sinir--;
	}

	std::cout << "Toplam: " << toplam;

	return 0;
}