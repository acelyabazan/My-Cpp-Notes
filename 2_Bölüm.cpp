#include <iostream>

// Türkçe karakter kullanmamız için locale.h kütüphanesini ekliyoruz:

#include <locale.h>

using namespace std;

int main() {

	// Türkçe karakter kullanmak için setlocale komutunun kullanıyoruz:
	setlocale(LC_ALL, "Turkish");

	// Tam sayı değişkeni:
	int tamSayi;
	
	// Kesirli sayı değişkeni (RAM üzerinde daha az yer kaplıyor):
	float kesirliSayi;

	// Kesirli sayı değişkeni (RAM üzerinde daha fazla yer kaplıyor):
	double kesirliSayi2;

	// Karakter | harf değişkeni:
	char karakter;

	// Anahtar değişkeni (True | False):
	bool anahtar;

	// Şimdi değişkenlerimize değer atıyoruz:

	tamSayi = 8;
	kesirliSayi = 1.1;
	kesirliSayi2 = 2.1;
	karakter = 'A'; // Tek tırnak kullanmalıyız. Çift tırnakta hata verir!
	anahtar = false;

	// Bu değişkenleri yazdırıyoruz:
	
	cout << "Tam Sayı:" << " " << tamSayi << endl;
	cout << "Kesirli Sayı:" << " " << kesirliSayi << endl;
	cout << "Kesirli Sayı (RAM Üzerinde Daha Fazla Yer Kaplar):" << " " << kesirliSayi2 << endl;
	cout << "Karakter:" << " " << karakter << endl;
	cout << "Anahtar Kelime:" << " " << anahtar << endl;


	return 0;
}