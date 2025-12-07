#include <iostream>
using namespace std;

// Nama Mahasiswa	: Muhammad Aditiya Rakhman
// NIM		        : 250401010013
// Kelas		    : IF102
// Mata Kuliah		: Algoritma dan Pemrograman

int main() {
    // Definisikan value dan variabel
    int A = 3;
    int B = 6;
    int C = 2;
    int K = 5;
    int L = 4;
    int M = 3;

    // Variabel untuk menampung nilai operasi
    int D;
    int num_b;
    int num_c;
    int num_d;
    int num_e;

    cout << "Ekspresi relasi dan logika                                         Hasil Numerik" << endl;
    
    D = (4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2);
    cout << "a. Hasil dari D = (4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2)   = " << D << endl;

    num_b = K + 5 < M || (C * M < L && 2 * M - L > 0);
    cout << "b. Hasil dari K + 5 < M || (C * M < L && 2 * M - L > 0)            = " << num_b << endl;

    num_c = L + 5 < M || C * K < L && 2 * K - L > 0;
    cout << "c. Hasil dari L + 5 < M || C * K < L && 2 * K - L > 0              = " << num_c << endl;

    num_d = A * 4 <= 3 * M + B;
    cout << "d. Hasil dari A * 4 <= 3 * M + B                                   = " << num_d << endl;

    num_e = K + 10 > A && L - 2 > 4 * C;
    cout << "e. Hasil dari K + 10 > A && L - 2 > 4 * C                          = " << num_e << endl;

}