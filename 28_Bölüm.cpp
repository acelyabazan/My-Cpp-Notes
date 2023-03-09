#include <iostream>

int main () {
    setlocale(LC_ALL, "Turkish");
    
    std::string isimler [2];
    
    for (int i = 0; i < 2; i++) {
        std::cout << "Lütfen " << i + 1 << ". ismi giriniz: ";
        std::cin >> isimler[i];
    }
    
    if (std::cin.fail() || std::cin.eof()) {
        std::cout << "Lütfen karakter giriniz" << std::endl;
    }
    else {
        for (int i = 0; i < 2; i++) {
            std::cout << isimler[i] << " ";
            
            if (i == 0) {
                std::cout << "<3 ";
            }
            else {
                
            }
        }
    }
    
    return 0;
}
