// activity2_110.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float persegipanjang(float p, float l) {
    return p * l;
}

float lingkaran(float r) {
    return 3.14 * r * r;
}

float segitiga(float a, float t) {
    return 0.5 * a * t;
}

int main()
{
    float nilai[10];
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    bool menu;
    menu = true;
    while (menu == true)
    {
        cout << "\n\n=============";
        cout << "\n M E N U ";
        cout << "\n\n=============";
        cout << "\n 1. Luas Persegi Panjang";
        cout << "\n 2. Luas Lingkaran";
        cout << "\n 3. Luas Segitiga";
        cout << "\n 4. Array";
        cout << "\n 5. KELUAR";
        cout << "\n Pilihan (1/2/3/4/5) : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukkan Panjang = ";
            cin >> panjang;
            cout << "Masukkan Lebar = ";
            cin >> lebar;
            cout << "\n Luas Persegi Panjang = " << persegipanjang(panjang, lebar);
            break;
        case 2:
            cout << "Masukkan Jari-Jari = ";
            cin >> jejari;
            cout << "\n Luas Lingkaran = ";
            cout << "\n Luas Lingkaran = " << lingkaran(jejari);
            break;
        case 3:
            cout << "Masukkan Alas = ";
            cin >> alas;
            cout << "Masukkan Tinggi = ";
            cin >> tinggi;
            cout << "\n Luas Segitiga = " << segitiga(alas, tinggi);
            break;
        case 4:
            cout << "Mengisi Array\n ";
            for (int i = 0; i < 10; i++) {
                cout << "Nilai ke-" << (i + 1) << ": ";
                cin >> nilai[i];
            }
            cout << "Membaca Isi Array\n";
            for (int i = 0; i < 10; i++) {
                cout << "\nNilai ke-" << (i + 1) << ":";
            }
            break;
        case 5:
            menu = false;
        default:
            cout << "Pilihan Salah !!";
            break;
        }
    }

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
