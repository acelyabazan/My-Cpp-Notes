#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	string isim = "Açi";
	cout << isim << endl;



	string ad, soyAd, yas;

	cout << "Adınızı Giriniz:" << " " << ad;
	cin >> ad;

	cout << "Soy Adınızı Giriniz:" << " " << soyAd;
	cin >> soyAd;

	cout << "Yaşınızı Giriniz:" << " " << yas;
	cin >> yas;

	cout << "Adınız:" << " " << ad << endl;
	cout << "Soy Adınız:" << " " << soyAd << endl;
	cout << "Yaşınız:" << " " << yas << endl;

	return 0;
}