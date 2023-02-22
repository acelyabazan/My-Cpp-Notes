#include <iostream>
#include <locale.h>


int main() {

	setlocale(LC_ALL, "Turkish");

	int a;
	int b;
	int c;

	std::cout << "Lütfen Üçgenin Birinci Kenarını Giriniz:" << " ";
	std::cin >> a;

	std::cout << "Lütfen Üçgenin İkinci Kenarını Giriniz:" << " ";
	std::cin >> b;

	std::cout << "Lütfen Üçgenin Üçüncü Kenarını Giriniz:" << " ";
	std::cin >> c;

	int toplam = a + b + c;

	if (a > 0 && b > 0 && c > 0){

	if (a == b && b == c){

	std::cout << "Butun kenarlar esit oldugu icin Eskenar Ucgendir" << std::endl;
	}
	else if (a == b || b == c || a == c){

	std::cout << "Sadece iki kenar esit oldugu icin Ikizkenar Ucgendir" << std::endl;
	}
	else
	{
	std::cout << "Kenarları esit olmadigi icin Cesitkenar Ucgendir" << std::endl;
	}
	}
	else {
		std::cout << "Lütfen tam sayı giriniz!" << std::endl;
	}

	return 0;
}