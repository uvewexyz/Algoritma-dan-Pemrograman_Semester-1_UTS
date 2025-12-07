#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Nama Mahasiswa	: Muhammad Aditiya Rakhman
// NIM		        : 250401010013
// Kelas		    : IF102
// Mata Kuliah		: Algoritma dan Pemrograman

int main() {
    // Simple output
    cout << "Layar Masukkan" << endl;
    cout << "TOKO KELONTONG KERONCONGAN" << endl;
    cout << "--------------------------" << endl;
    cout << "A. Susu Dancow" << endl;
    cout << "  1. Ukuran Kecil" << endl;
    cout << "  2. Ukuran Sedang" << endl;
    cout << "  3. Ukuran Besar" << endl;
    cout << "B. Susu Bendera" << endl;
    cout << "  1. Ukuran Kecil" << endl;
    cout << "  2. Ukuran Sedang" << endl;
    cout << "  3. Ukuran Besar" << endl;
    cout << "C. Susu SGM" << endl;
    cout << "  1. Ukuran Kecil" << endl;
    cout << "  2. Ukuran Sedang" << endl;
    cout << "  3. Ukuran Besar" << endl;

    string nama_susu;
    int ukuran, harga_satuan, dibeli, total_bayar;
    char jenis_susu, ulang;

    cout << "\nLayar Keluaran" << endl;
    cout << "--------------------------" << endl;

    do {
        do {
            cout << "Masukan Jenis Susu                 : ";
            cin >> jenis_susu;
            if (jenis_susu == 'A') {
                nama_susu = "Dancow";
                do {
                    cout << "Masukan Ukuran Kaleng              : ";
                    cin >> ukuran;
                    if (ukuran == 1) {
                        harga_satuan = 15000;
                        cout << "Harga Satuan Barang                  Rp. " << harga_satuan << endl;
                        break;
                    } else if (ukuran == 2) {
                        harga_satuan = 20000;
                        cout << "Harga Satuan Barang                  Rp. " << harga_satuan << endl;
                        break;
                    } else if (ukuran == 3) {
                        harga_satuan = 25000;
                        cout << "Harga Satuan Barang                  Rp. " << harga_satuan << endl;
                        break;
                    } else {
                        cout << "Ukuran kaleng tidak ada, pilih lagi" << endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                } while (ukuran < 1 || ukuran > 3);
                break;
            } else if (jenis_susu == 'B') {
                nama_susu = "Bendera";
                do {
                    cout << "Masukan Ukuran Kaleng              : ";
                    cin >> ukuran;
                    if (ukuran == 1) {
                        harga_satuan = 13500;
                        cout << "Harga Satuan Barang                  Rp. " << harga_satuan << endl;
                        break;
                    } else if (ukuran == 2) {
                        harga_satuan = 17500;
                        cout << "Harga Satuan Barang                  Rp. " << harga_satuan << endl;
                        break;
                    } else if (ukuran == 3) {
                        harga_satuan = 20000;
                        cout << "Harga Satuan Barang                  Rp. " << harga_satuan << endl;
                        break;
                    } else {
                        cout << "Ukuran kaleng tidak ada, pilih lagi" << endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                } while (ukuran < 1 || ukuran > 3);
                break;
            } else if (jenis_susu == 'C') {
                nama_susu = "SGM";
                do {
                    cout << "Masukan Ukuran Kaleng              : ";
                    cin >> ukuran;
                    if (ukuran == 1) {
                        harga_satuan = 15000;
                        cout << "Harga Satuan Barang                  Rp. " << harga_satuan << endl;
                        break;
                    } else if (ukuran == 2) {
                        harga_satuan = 18500;
                        cout << "Harga Satuan Barang                  Rp. " << harga_satuan << endl;
                        break;
                    } else if (ukuran == 3) {
                        harga_satuan = 22000;
                        cout << "Harga Satuan Barang                  Rp. " << harga_satuan << endl;
                        break;
                    } else {
                        cout << "Ukuran kaleng tidak ada, pilih lagi" << endl;
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    }
                } while (ukuran < 1 || ukuran > 3);
                break;
            } else {
                cout << "Pilihan susu tidak ada, pilih lagi" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } while (jenis_susu != 'A' || jenis_susu != 'B' || jenis_susu != 'C');
        
        cout << "Jumlah Yang dibeli                 : ";
        cin >> dibeli;

        total_bayar = harga_satuan * dibeli;
        cout << "Harga Yang Harus dibayar Sebesar Rp. " << total_bayar << endl;

        cout << "Ingin hitung transaksi lainnya (Y/N)? ";
        cin >> ulang;
        ulang = toupper(ulang);
    } while (ulang == 'Y');
    return 0;
}