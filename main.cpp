#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>

using namespace std;

int main() {

    string sandi; // Menggunakan nama yang sesuai
    cout << "Masukkan Nomor NIM Anda" << endl;
    cout << "Input: ";
    cin >> sandi;

    string kalimat;
    int sandiKalimat = sandi.length();

    cout << char(218);
    for (int i = 0; i < sandiKalimat; i++) {
        cout << char(196);
    }
    cout << char(191) << endl;

    cout << char(179) << sandi << char(179) << endl;

    cout << char(192);
    for (int i = 0; i < sandiKalimat; i++) {
        cout << char(196);
    }
    cout << char(217) << endl;

    Sleep(3000);
    system("cls");


    // Make Variable
    int pilih;
    int pilihan;
    float tabungan = 500000;
    int pin;
    string username;

    // String Welcome

    const HANDLE oh = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(oh, 13);
    cout << "\t\t\t\t\t====== Bank Amikom Indonesia ======\n";
    SetConsoleTextAttribute(oh, 88);
    cout << "\t\t\t\t\t       Selamat datang di Bank      \n";
    SetConsoleTextAttribute(oh, 13);
    cout << "\t\t\t\t\t-----------------------------------\n";
    SetConsoleTextAttribute(oh, 13);
    SetConsoleCursorPosition(oh, { 0,6 });
    cout << "Silahkan Login terlebih dahulu. \n";

    // Input Username

    cout << "Masukkan username : ";
    cin >> username;
    // Input Pin 
    cout << "Masukkan Pin : ";
    cin >> pin;
    cout << endl;

    // Validasi Login
    if (username != "kelompok9") {
        cout << "Maaf, username tidak dikenal. \n";
        return 0;
    } if (pin != 123456) {
        cout << "Maaf, Pin anda salah. \n";
        return 0;
    }
    else {
        system("cls");
    }

    // User Choice
pilih:
    cout << "=== Selamat datang " + username + " === \n";
    cout << "Masukkan pilihan anda : \n";
    cout << "1. Cek tabungan. \n";
    cout << "2. Tarik tunai. \n";
    cout << "3. Isi tabungan. \n";
    cout << "4. Keluar. \n";
    cin >> pilihan;
    system("cls");

    // User Input Choice

    switch (pilihan)
    {
    case 1:
        cout << "Tabungan " + username + " sebesar : Rp" << tabungan << endl;
        cout << "1. Lanjut \n";
        cout << "2. Keluar \n";
        cout << "1/2 : ";
        cin >> pilih;
        if (pilih == 1) {
            system("cls");
            goto pilih;
        } if (pilih == 2) {
            goto keluar;
        }
        else {
            goto gagal;
        }
        break;

        float tarikTunai;
    case 2:
        cout << "Jumlah uang yang ditarik : Rp";
        cin >> tarikTunai;
        if (tarikTunai > tabungan) {
            cout << "Uang anda tidak cukup.";
        }
        else {
            tabungan = tabungan - tarikTunai;
            cout << "Silahkan ambil uang anda. \n";
            cout << "Sisa uang anda sekarang sebesar : Rp" << tabungan << endl;
            cout << "Terimakasih sudah menggunakan Bank Amikom " << username << endl;
            cout << "1. Lanjut \n";
            cout << "2. Keluar \n";
            cout << "1/2 : ";
            cin >> pilih;
            if (pilih == 1) {
                system("cls");
                goto pilih;
            } if (pilih == 2) {
                goto keluar;
            }
            else {
                goto gagal;
            }
        }
        break;

    case 3:
        float addTabungan;
        cout << "Jumlah uang yang ingin ditambahkan : Rp";
        cin >> addTabungan;
        tabungan = tabungan + addTabungan;
        cout << "Tabungan anda sekarang sebesar : Rp" << tabungan << endl;
        cout << "1. Lanjut \n";
        cout << "2. Keluar \n";
        cout << "1/2 : ";
        cin >> pilih;
        if (pilih == 1) {
            system("cls");
            goto pilih;
        } if (pilih == 2) {
            goto keluar;
        }
        else {
            goto gagal;
        }
        break;

    case 4:
    keluar:
        cout << "Terimakasih sudah menggunakan Bank Amikom Indonesia";
        break;

    gagal:
    default:
        cout << "Gagal, pilihan tidak sesuai";
        break;
    }


    return 0;
}