#include <iostream>

int main() {
	setlocale(LC_ALL, "Turkish");

	int tamSayi;
	int toplam = 1;



	std::cout << "Bir tam sayı giriniz: ";
	std::cin >> tamSayi;

	if (std::cin.fail() || std::cin.eof()){ // Kullanıcının girdiği değer tam sayı değilse:

		std::cout << "Lütfen tam sayı giriniz!" << std::endl;
	}
	else {
		while (tamSayi > 0) {

			toplam *= tamSayi;
			tamSayi--;
		}
		std::cout << toplam << std::endl;
	}

	return 0;
}

// Bu kodda, std::cin.fail() ve std::cin.eof() işlevlerini kullanarak girilen değerin tam sayı olup olmadığını kontrol ediyoruz. Eğer tam sayı değilse, hata mesajı veriyoruz; aksi takdirde faktöriyel hesaplanıyor ve sonuç ekrana yazdırılıyor.
