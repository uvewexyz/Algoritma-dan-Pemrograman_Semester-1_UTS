#include <iostream>
#include <iomanip>
using namespace std;

// Nama Mahasiswa	: Muhammad Aditiya Rakhman
// NIM		        : 250401010013
// Kelas		    : IF102
// Mata Kuliah		: Algoritma dan Pemrograman

int main() {
    int i, j;

    cout << "Program Perkalian Matriks (5x5)\n" << endl;

    // Loop untuk baris
    for(i = 1; i <= 5; i++) {
        // Loop untuk kolom
        for(j = 1; j <= 5; j++) {
            // Rumus menghitung perkalian nilai kolom dengan baris 
            cout << setw(4) << (i * j); 
        }
        // Pindah ke baris baru setelah kolom 5 selesai
        cout << "\n" << endl;
    }
    return 0;
}