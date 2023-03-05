#include <iostream>

// Int ve Float dizileri:

int main()
{
    setlocale(LC_ALL, "Turkish");

    // 1. yöntem:
    // int sayilar[5] = { 2, 3, 4, 5, 1 };

    // 2. yöntem:
    // int sayilar[5];

    /* sayilar[0] = 2;
    sayilar[1] = 3;
    sayilar[2] = 4;
    sayilar[3] = 5;
    sayilar[4] = 1; */

    int sayilar[5];

    int toplam = 0;

    for (int i = 0; i < 5; i++) {
        std::cout << "Lütfen " << i + 1 << ". elemanı giriniz: ";
        std::cin >> sayilar[i];
        toplam += sayilar[i];
    }
    for (int i = 0; i < 5; i++) {
        std::cout << "Dizinin " << i + 1 << ". elemanı = " << sayilar[i] << std::endl;
    }
    std::cout << "5 Elemanın Toplamı = " << toplam << std::endl;

    return 0;
}