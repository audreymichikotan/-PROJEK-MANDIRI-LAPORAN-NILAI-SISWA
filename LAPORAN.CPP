// Program untuk menghitung nilai akhir siswa
// Program ini meminta input nama siswa, nilai tugas, nilai UTS, dan nilai UAS.
// Kemudian program akan menghitung nilai akhir dan menampilkan laporan dalam bentuk tabel.

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Siswa {
    string nama;
    double tugas;
    double uts;
    double uas;
    double akhir;
};

int main() {
    int jumlahSiswa;

    cout << "Masukkan jumlah siswa: ";
    cin >> jumlahSiswa;

    if (jumlahSiswa <= 0) {
        cout << "Jumlah siswa tidak valid!" << endl;
        continue;
    }

    
    Siswa siswa[jumlahSiswa];

    // 1. Proses Input Data
    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "--- Data Siswa " << i + 1 << " ---" << endl;
        cout << "Masukkan nama siswa: ";
        cin >> siswa[i].nama; 

        cout << "Masukkan nilai tugas: ";
        cin >> siswa[i].tugas;
        cout << "Masukkan nilai UTS: ";
        cin >> siswa[i].uts;
        cout << "Masukkan nilai UAS: ";
        cin >> siswa[i].uas;

        // Hitung nilai akhir
        siswa[i].akhir = (siswa[i].tugas + siswa[i].uts + siswa[i].uas) / 3.0;
    }

    // Header Laporan
    cout << "==============================================================" << endl;
    cout << left << setw(20) << "Nama Siswa" 
         << right << setw(10) << "Tugas" 
         << setw(10) << "UTS" 
         << setw(10) << "UAS" 
         << setw(12) << "Nilai Akhir" << endl;
    cout << "==============================================================" << endl;

    // Format desimal: 2 angka di belakang koma
    cout << fixed << setprecision(2);

    // Baris Data
    for (int i = 0; i < jumlahSiswa; i++) {
        cout << left << setw(20) << siswa[i].nama
             << right << setw(10) << siswa[i].tugas 
             << setw(10) << siswa[i].uts
             << setw(10) << siswa[i].uas
             << setw(12) << siswa[i].akhir << endl;
    }
    cout << "==============================================================" << endl;
    
    return 0;
}
