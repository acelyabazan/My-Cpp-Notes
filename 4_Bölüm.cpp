#include <iostream>
#include <locale.h>

using namespace std;

int main(){
    
    setlocale(LC_ALL, "Turkish");
    
    cout << "Selamlar Youtube! Umarım Videoyu beğenmişsinizdir." << endl;
    
    int tamSayi;
    
    char karakter;
    bool anahtar;
    
    // Kullanıcıdan İstediğimiz Değeri Belirtiyoruz:
    cout << "Lütfen bir tam sayı giriniz:" << " ";
    
    // Kullanıcıdan Bir tam Sayı İstiyoruz:
    cin >> tamSayi;
    // Kullanıcının Girmiş Olduğu Tam Sayıyı Konsola Yazdırıyoruz:
    cout << "Girmiş olduğunuz sayı:" << " " << tamSayi << endl;
    
    // kullanıcıdan Bir Karakter Girmesini İstiyoruz:
    cout << "Lütfen Bir Karakter Giriniz (Örneğin: A):" << " ";
    cin >> karakter;
    
    cout << "Girmiş Olduğunuz Karakter:" << " " << karakter << endl;

    // Kullanıcıdan Anahtar Girmesini İstiyoruz:
    cout << "Lütfen Bir Anahtar Giriniz (Örneğin: True, False):" << " ";
    cin >> anahtar;
    
    cout << "Girmiş Olduğunuz Karakter:" << " " << anahtar << endl;
    
    return 0;
}
