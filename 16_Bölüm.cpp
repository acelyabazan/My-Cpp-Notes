#include <iostream>
#include <locale.h>

int main() {

	setlocale(LC_ALL, "Turkish");

	int toplama = 1;
	int cikarma = 2;
	int bolme = 3;
	int carpma = 4;

	int islem;

	float sayi1;
	float sayi2;

	std::cout << "Toplama işlemi için --> '1' tuşlayınız" << std::endl;
	std::cout << "Çıkarma işlemi için --> '2' tuşlayınız" << std::endl;
	std::cout << "Bölme işlemi için --> '3' tuşlayınız" << std::endl;
	std::cout << "Çarpa işlemi için --> '4' tuşlayınız" << std::endl;
	
	std::cout << "İşlem numarasını giriniz:" << " ";
	std::cin >> islem;

	std::cout << "1. Sayıyı giriniz:" << " ";
	std::cin >> sayi1;

	std::cout << "2. Sayıyı giriniz:" << " ";
	std::cin >> sayi2;


	if (islem == toplama) {
		float yeniSayi1 = sayi1 + sayi2;
		std::cout << sayi1 << "+" << sayi2 << "=" << yeniSayi1 << std::endl;
	}
	else if (islem == cikarma) {
		float yeniSayi2 = sayi1 - sayi2;
		std::cout << sayi1 << "-" << sayi2 << "=" << yeniSayi2 << std::endl;
	}
	else if (islem == bolme) {
		float yeniSayi3 = sayi1 / sayi2;
		std::cout << sayi1 << "/" << sayi2 << "=" << yeniSayi3 << std::endl;
	}
	else if (islem == carpma) {
		float yeniSayi4 = sayi1 * sayi2;
		std::cout << sayi1 << "x" << sayi2 << "=" << yeniSayi4 << std::endl;
	}

	return 0;
}