#include <iostream>
#include <locale.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Turkish");

	// int (4byte yer kaplıyor)
	// double (8byte yer kaplıyor)
	// char (1byte yer kaplıyor)
	// float (4byte yer kaplıyor)
	// bool (1byte yer kaplıyor)


	int sayi1 = 5;
	int sayi2 = 20;

	double kesirliSayi3 = 10.2;

	cout << "5 + 20 =" << " " << sayi1 + sayi2 << endl;

	// 4byte ve 8byte toplarsak, 4byte 8byte'a çevirlir. Toplam RAM üzerinde 16byte yer kaplamaktadır:
	cout << "20 + 10.2 =" << " " << sayi2 + kesirliSayi3 << endl;
	
	return 0;
}