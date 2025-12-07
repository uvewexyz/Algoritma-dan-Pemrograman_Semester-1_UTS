#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Nama Mahasiswa	: Muhammad Aditiya Rakhman
// NIM		        : 250401010013
// Kelas		    : IF102
// Mata Kuliah		: Algoritma dan Pemrograman

int main() {
    // Definisikan variabel dan nilainya
    int honor_tetap = 3500000;
    int honor_lembur = 12500;
    int jam_kerja = 8;

    string nama_karyawan;
    int golongan, pendidikan, jumlah_jam_kerja, tunjangan_jabatan, tunjangan_pendidikan, honor_lembur_total, honor_diterima;
    char ulang;

    do {
        cout << "Program Hitung Honor Karyawan Kontrak PT. DINGIN DAMAI" << endl;
        cout << "------------------------------------------------------" << endl;

        // Cross check inputan nama karyawan
        cout << "Nama Karyawan                          : ";
        cin >> nama_karyawan;
        
        // Cross check inputan bagian golongan
        do {
            cout << "Golongan                               : ";
            cin >> golongan;
            if (golongan == 1) {
                tunjangan_jabatan = 0.05 * honor_tetap;
                break;
            } else if (golongan == 2) {
                tunjangan_jabatan = 0.1 * honor_tetap;
                break;
            } else if (golongan == 3) {
                tunjangan_jabatan = 0.15 * honor_tetap;
                break;
            } else {
                cout << "Input angka 1, 2, atau 3!" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } while (golongan < 1 || golongan > 3);

        // Cross check inputan bagian pendidikan
        do {
            cout << "Pendidikan (1. SMU/A; 2. D3; 3. S1)    : ";
            cin >> pendidikan;
            if (pendidikan == 1) {
                tunjangan_pendidikan = 0.025 * honor_tetap;
                break;
            } else if (pendidikan == 2) {
                tunjangan_pendidikan = 0.05 * honor_tetap;
                break;
            } else if (pendidikan == 3) {
                tunjangan_pendidikan = 0.075 * honor_tetap;
                break;
            } else {
                cout << "Input angka 1. SMU/A; 2. D3; 3. S1" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } while (pendidikan > 1 || pendidikan < 3);
        
        // Inputan jumlah jam kerja
        cout << "Jumlah Jam Kerja                       : ";
        cin >> jumlah_jam_kerja;
        if (jumlah_jam_kerja > jam_kerja) {
            honor_lembur_total = (jumlah_jam_kerja - jam_kerja) * honor_lembur;
        } else {
            honor_lembur_total = 0;
        }
        
        // Hitung total honor yang diterima
        honor_diterima = honor_tetap + tunjangan_jabatan + tunjangan_pendidikan + honor_lembur_total;
        cout << "\nKaryawan yang bernama                  : " << nama_karyawan << endl;

        cout << "\nHonor yang diterima" << endl;
        cout << "Honor Tetap                            : Rp." << honor_tetap << endl;
        cout << "Tunjangan Jabatan                      : Rp." << tunjangan_jabatan << endl;
        cout << "Tunjangan Pendidikan                   : Rp." << tunjangan_pendidikan << endl;
        cout << "Honor Lembur                           : Rp." << honor_lembur_total << endl;
        cout << "                                       -------------------- +" << endl;
        cout << "Honor Yang Diterima                    : Rp." << honor_diterima << endl;

        cout << "\nHitung ulang Honor Karyawan Lainnya (Y/N)? ";
        cin >> ulang;

    } while (ulang == 'Y');

    return 0;

}