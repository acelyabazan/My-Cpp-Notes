#include <iostream>
#include <locale.h>

using namespace std;

int main() {

    setlocale(LC_ALL, "Turkish");

    cout << "Hello World!" << endl;

    // Matematiksel İşlemler:

    // Toplama: +
    // Çıkarma: -
    // Çarpma: *
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

    // Matematiksel Operasyonların Kısa Yöntemi:

    int sayi3;
    int sayi4;

    cout << "Lütfen 3. Sayıyı Giriniz:";
    cin >> sayi3;
    
    sayi3 = sayi3 + 1;

    cout << "Yeni Sayımız:" << " " << sayi3 << endl;

    // sayi4 ^+= 1;
    // sayi4 = sayi + 1;
    // Yukardaki işlemler aşağıdaki işlem aynı işlevselliğe sahiptir:

    cout << "Lütfen 4. Sayıyı Giriniz:";
    cin >> sayi4;

    sayi4++;

    cout << "Yeni Sayımız:" << " " << sayi4 << endl;

    int sayi5;

    cout << "Lütfen 5. Sayıyı Giriniz:";
    cin >> sayi5;

    ++sayi5;

    cout << "Yeni Sayımız:" << " " << sayi5 << endl;


    int sayi6 = 0;
    int sayi7 = 0;

    // İlk önce sayi6, sayi7'ye eşitlenecek, sonra 1 arttıracak çünkü, ++ işaretini en sona koyduğumuz için bu yöntem ile çalışıyor:
    sayi7 = sayi6++;

    cout << "Sayi 6:" << " " << sayi6 << " " << "Sayi 7:" << sayi7 << endl;

    int sayi8;
    int sayi9;

    sayi8 = 0;
    sayi9 = 0;

    // İlk önce sayi8, 1 arttıracak, sonra sayi8, sayi9'a eşitlenecek çünkü, ++ işaretini en başa koyduğumuz için bu yöntem ile çalışıyor:
    sayi9 = ++sayi8;

    cout << "Sayi 8:" << " " << sayi8 << " " << "Sayi 9:" << sayi9 << endl;

    // ++ yerine -- de kullanabiliriz:

    int sayi10 = 0;
    int sayi11 = 0;

    sayi11 = sayi10--;

    cout << "Sayi 10:" << " " << sayi10 << " " << "Sayi 11:" << sayi11 << endl;

    int sayi12 = 0;
    int sayi13 = 0;

    sayi13 = --sayi12;

    cout << "Sayi 12:" << " " << sayi12 << " " << "Sayi 13:" << sayi13 << endl;

    return 0;
}

// NOT: float değişkeni kullanırken modunu alamasın. Int değerini kullanmalısın.
