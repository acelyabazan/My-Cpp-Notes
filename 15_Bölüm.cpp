#include <iostream>
#include <locale.h>
#include <string>

int main() {
	setlocale(LC_ALL, "Turkish");

	std::string isim1, isim2, isim3;
	std::string soyIsim1, soyIsim2, soyIsim3;
	int tcKimlikNo1, tcKimlikNo2, tcKimlikNo3;
	bool cinsiyet1, cinsiyet2, cinsiyet3;

	int urunSayisi1 = 50;
	int urunSayisi2 = 50;
	int urunSayisi3 = 50;

	int satisMiktari1;
	int satisMiktari2;
	int satisMiktari3;


	// true  --> kadın
	// false --> erkek

	// 1. çalışan bilgileri:

	std::cout << "Lüten 1. çalışan kişinin bilgilerini giriniz:" << std::endl;
	std::cout << "İsim:" << " ";
	std::cin >> isim1;

	std::cout << "Soy isim:" << " ";
	std::cin >> soyIsim1;

	std::cout << "TC kimlik no:" << " ";
	std::cin >> tcKimlikNo1;

	std::cout << "Cinsiyet:" << " ";
	std::cin >> cinsiyet1;

	// 1. kullanıcının satmış olduğu bilgileri alıyoruz:

	std::cout << isim1 << " " << "İçin satmış olduğunuz adeti girin:" << " ";
	std::cin >> satisMiktari1;


	urunSayisi1 = urunSayisi1 - satisMiktari1;


	// 2. çalışan bilgileri:

	std::cout << "Lüten 2. çalışan kişinin bilgilerini giriniz:" << std::endl;
	std::cout << "İsim:" << " ";
	std::cin >> isim2;

	std::cout << "Soy isim:" << " ";
	std::cin >> soyIsim2;

	std::cout << "TC kimlik no:" << " ";
	std::cin >> tcKimlikNo2;

	std::cout << "Cinsiyet:" << " ";
	std::cin >> cinsiyet2;

	// 2. kullanıcının satmış olduğu bilgileri alıyoruz:

	std::cout << isim2 << " " << "İçin satmış olduğunuz adeti girin:" << " ";
	std::cin >> satisMiktari2;

	urunSayisi2 = urunSayisi2 - satisMiktari2;


	// 3. çalışan bilgileri:

	std::cout << "Lüten 3. çalışan kişinin bilgilerini giriniz:" << std::endl;
	std::cout << "İsim:" << " ";
	std::cin >> isim3;

	std::cout << "Soy isim:" << " ";
	std::cin >> soyIsim3;

	std::cout << "TC kimlik no:" << " ";
	std::cin >> tcKimlikNo3;

	std::cout << "Cinsiyet:" << " ";
	std::cin >> cinsiyet3;

	// 3. kullanıcının satmış olduğu bilgileri alıyoruz:

	std::cout << isim3 << " " << "İçin satmış olduğunuz adeti girin:" << " ";
	std::cin >> satisMiktari3;

	urunSayisi3 = urunSayisi3 - satisMiktari3;

	if (urunSayisi1 > 25) {
		std::cout << isim1 << " " << "Satış Miktarı Yeterli Değil" << " " << std::endl;
	}
	else {
		std::cout << isim1 << " " << "Satış Miktarı Yeterlidir" << " " << std::endl;
	}
	if (urunSayisi2 > 25) {
		std::cout << isim2 << " " << "Satış Miktarı Yeterli Değil" << " " << std::endl;
	}
	else {
		std::cout << isim2 << " " << "Satış Miktarı Yeterlidir" << " " << std::endl;
	}
	if (urunSayisi3 > 25) {
		std::cout << isim3 << " " << "Satış Miktarı Yeterli Değil" << " " << std::endl;
	}
	else {
		std::cout << isim3 << " " << "Satış Miktarı Yeterlidir" << " " << std::endl;
	}

	if (cinsiyet1 == 0) {
		std::cout << isim1 << " " << "Erkek" << " " << std::endl;
	}
	else {
		std::cout << isim1 << " " << "Kadın" << " " << std::endl;
	}
	if (cinsiyet2 == 0){
		std::cout << isim2 << " " << "Erkek" << " " << std::endl;
	}
	else {
		std::cout << isim2 << " " << "Kadın" << " " << std::endl;
	}
	if (cinsiyet3 == 0) {
		std::cout << isim3 << " " << "Erkek" << " " << std::endl;
	}
	else {
		std::cout << isim3 << " " << "Kadın" << " " << std::endl;
	}

	return 0;
}