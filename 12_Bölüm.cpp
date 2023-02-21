#include <iostream>
#include <locale.h>

// using namespace std; yerine artık kütüphanelerin hepsinde kodun başına std:: kullanıyoruz.

// stl için ayrı bir kaynak araştırmalısın Açi!

int main() {

	// Operatörler:
	// == : eşit eşittir
	// != : eşit eşit değildir
	// <  : büyüktür
	// >  : küçüktür
	// <= : büyüktür veya eşittir
	// >= : küçüktür veya eşittir
	// && : ve 
	// || : veya

	// Bu operatörler sonucu ya True değeri verecek ya da False değerini bizlere verecektir.

	setlocale(LC_ALL, "Turkish");

	int sayi1;
	int sayi2;

	std::cout << "Birinci Sayıyı Giriniz:" << " ";
	std::cin >> sayi1;

	std::cout << "İkinci Sayıyı Giriniz:" << " ";
	std::cin >> sayi2;

	if (sayi1 < sayi2) {
		std::cout << sayi1 << " " << "<" << " " << sayi2 << std::endl;
	}else if (sayi1 > sayi2) {
		std::cout << sayi1 << " " << ">" << " " << sayi2 << std::endl;
	}else if (sayi1 == sayi2) {
		std::cout << sayi1 << " " << "=" << " " << sayi2 << std::endl;
	}
	return 0;
}