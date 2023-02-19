#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Turkish");
    
    cout << "Hello World!" << endl;
    
    // Matematiksel İşlemler:
    
    // Toplama: +
    // Çıkarma: -
    // Çarpma: *
    // Üssünü Almak:
    // Bölme: /
    // Modunu Alma: %
    
    int sayi1;
    int sayi2;
    
    cout << "1. Sayıyı Giriniz:" << " ";
    cin >> sayi1;
    
    cout << "2. Sayıyı Giriniz:" << " ";
    cin >> sayi2;
    
    // Toplama İşlemini Gerçekleştiriyoruz:
    int toplam = sayi1 + sayi2;
    cout << sayi1 << " " << "+" << " " << sayi2 << " " << "=" << " " << toplam << endl;
    
    // Çıkarma İşlemini Gerçekleştiriyoruz:
    int cikar = sayi1 - sayi2;
    cout << sayi1 << " " << "-" << " " << sayi2 << " " << "=" << " " << cikar << endl;
    
    // Çarpma İşlemini Gerçekleştiriyoruz:
    int carp = sayi1 * sayi2;
    cout << sayi1 << " " << "x" << " " << sayi2 << " " << "=" << " " << carp << endl;
    
    // Üssünü Alma İşlemini Gerçekleştiriyoruz:
    //
    
    // Bölme İşlemini Gerçekleştiriyoruz:
    int bolme = sayi1 / sayi2;
    cout << sayi1 << " " << "/" << " " << sayi2 << " " << "=" << " " << bolme << endl;
    
    // Mod İşlemini Gerçekleştiriyoruz:
    int mod = sayi1 / sayi2;
    cout << sayi1 << " " << "%" << " " << sayi2 << " " << "=" << " " << mod << endl;
    
    return 0;
}

// Video Yarıda Kaldı. Akşam Devam Edeceğim.
