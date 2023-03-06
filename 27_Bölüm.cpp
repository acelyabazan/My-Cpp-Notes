#include <iostream>

int main() {
    setlocale(LC_ALL, "Turkish");
    
    int sinavNotlari[3];
    
    for (int i = 0; i < 3; i++) {
        std::cout << "Lütfen " << i + 1 << ". notunuzu giriniz: ";
        std::cin >> sinavNotlari[i];
    }
    for (int i = 0; i < 3; i++){
        std::cout << i + 1 << ". notunuz: " << sinavNotlari[i] << std::endl;
    }
    
    if (std::cin.fail() || std::cin.eof()) {
        std::cout << "Lütfen tam sayı giriniz!" << std::endl;
    }
    else {
        int ortalamaToplam = sinavNotlari[0] + sinavNotlari[1] + sinavNotlari[2];
        float ortalama = ortalamaToplam / 3;
        
        std::cout << "3 sınavınızın ortalaması: " << ortalama << std::endl;
        
        if (ortalama >= 50) {
            std::cout << "Dereceniz: C+" << std::endl;
        }
        else if (ortalama >= 65) {
            std::cout << "Dereceniz: B" << std::endl;
        }
        else if (ortalama >= 75) {
            std::cout << "Dereceniz: B+" << std::endl;
        }
        else if (ortalama >= 85) {
            std::cout << "Dereceniz: A" << std::endl;
        }
        else if (ortalama >= 95) {
            std::cout << "Dereceniz: A+" << std::endl;
        }
        else {
            std::cout << "Ortalamanız sınıf atlamanız için yeterli değil, kaldınız!" << std::endl;
        }
    }
    return 0;
}
