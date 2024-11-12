#include <iostream>
using namespace std;

#include "calisma.h"

int main() {
    Nokta n1(1, 10, 100);
    Nokta n3 = n1;

    #if 0 // Sabit deðerlerin sýnýflarda tanýmý
    cout << n1.t << endl;
    #endif

    #if 0 // Dizi ve pointer constructor
    Nokta dizi[5] = {{1, 2}, {3, 4}, {5, 6}, {7}};
    for (int i = 0; i < 5; i++) {
        cout << dizi[i].getX() << " " << dizi[i].getY() << endl;
    }
    Nokta* ptr = new Nokta(3, 5);
    delete ptr;
    #endif

    #if 0 // Constructor örneði
    Nokta n1;
    cout << n1.getX() << " " << n1.getY() << endl;
    Nokta n2(2, 5);
    cout << n2.getX() << " " << n2.getY() << endl;
    Nokta n3(1);
    cout << n3.getX() << " " << n3.getY() << endl;
    #endif

    #if 0 // Setter ve getter kullanýmý
    Nokta n1;
    n1.setX(3);
    n1.setY(5);
    cout << n1.getX() << ", " << n1.getY() << endl;
    #endif

    #if 0 // Deðer atama ve yazdýrma fonksiyonlarý
    Nokta n1;
    n1.degerAta(2, 3);
    n1.ekranaYazdir();
    Nokta* n4 = new Nokta();
    n4->degerAta(12, 33);
    n4->ekranaYazdir();
    delete n4;
    #endif

    #if 0 // Baþlangýç noktasýnda mý kontrolü
    Nokta n;
    n.degerAta(0, 0);
    n.ekranaYazdir();
    if (n.baslangictaMi()) {
        cout << "Baþlangýç noktasýnda." << endl;
    } else {
        cout << "Baþlangýçta deðil!" << endl;
    }
    #endif

    return 0;
}

