// 6 basamaklı bir sayının, her basamağındaki rakamı topluyoruz. Bu denklemi aşağıdaki gibi çözebilirsiniz.

#include <iostream>
#include <locale.h>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");

	int altiBasamakliSayi;

	cout << "6 Basamaklı Bir Sayı Giriniz:" << " ";
	cin >> altiBasamakliSayi;

	int yuzbinler = (altiBasamakliSayi / 100000);
	int onbinler = (altiBasamakliSayi % 100000) / 10000;
	int binler = (altiBasamakliSayi % 10000) / 1000;
	int yuzler = (altiBasamakliSayi % 1000) / 100;
	int onlar = (altiBasamakliSayi % 100) / 10;
	int birler = (altiBasamakliSayi % 10);

	int toplam = yuzbinler + onbinler + binler + yuzler + onlar + birler;

	cout << altiBasamakliSayi << " " << "Sayının değerlerinin Toplamı: " << " " << toplam << endl;

	return 0;
}