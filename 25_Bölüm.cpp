#include <iostream>

int main()
{
    setlocale(LC_ALL, "Turkish");

    // break döngüyü kırmak, continue ise altındaki altındaki kodları çalıştırmak döngüye devam etmek demektir:

    int i;
    int toplam = 0;

    std::cout << "Lütfen tam sayı giriniz: ";
    std::cin >> i;

    if (std::cin.fail() || std::cin.eof()) {
        std::cout << "Lütfen tam sayı giriniz!";
    }
    else {
        do {
            std::cout << i << std::endl;
            toplam += i;
            i--;
            continue;
        } while (i > 0); {
            std::cout << "Toplam: " << toplam << std::endl;
        }
    }

    return 0;
}
