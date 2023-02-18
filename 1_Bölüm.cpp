#include <iostream>

// Türkçe gibi karakter kullanımı için kütüphane locale.h kütüphanesini çağırıyoruz:
#include <locale.h>

using namespace std;

int main() {

	// Türkçe karakter komutunu çağırıyoruz:
	setlocale(LC_ALL, "Turkish");

	cout << "Welcome to Upcomm" << endl;

	return 0;

}