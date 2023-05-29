#include <iostream>
using namespace std;

struct Identitas
{
    long NIM;
    string nama;
    string gender;
    string alamat;
};
struct Nilai
{
    string namaMatakuliah;
    float nilaiTugas;
    float nilaiUTS;
    float nilaiUAS;
};
struct Mahasiswa
{
    Identitas identitas;
    Nilai nilai;
};

int main()
{
    Mahasiswa mhs;
    mhs.identitas.NIM = 22051204078;
    mhs.identitas.nama = "Rizqi Jawwadin";
    mhs.identitas.gender = "Laki - laki";
    mhs.identitas.alamat = "Sembungan kidul No.16 Dukun-Gresik";

    mhs.nilai.namaMatakuliah = "Struktur Data";
    mhs.nilai.nilaiTugas = 90;
    mhs.nilai.nilaiUTS = 85;
    mhs.nilai.nilaiUAS = 95;

    int options;
    cout << "1. Identitas Mahasiswa" << endl;
    cout << "2. Nilai Mahasiswa" << endl;
    while (!(options == 1 || options == 2))
    {
        cout << "Pilih menu yang ingin ditampilkan : ";
        cin >> options;
    }

    switch (options)
    {
    case 1:
        cout << "\nNIM\t\t: " << mhs.identitas.NIM << endl;
        cout << "Nama\t\t: " << mhs.identitas.nama << endl;
        cout << "Gender\t\t: " << mhs.identitas.gender << endl;
        cout << "Alamat\t\t: " << mhs.identitas.alamat << endl;
        break;
    case 2:
        cout << "\nMata kuliah\t: " << mhs.nilai.namaMatakuliah << endl;
        cout << "Nilai tugas\t: " << mhs.nilai.nilaiTugas << endl;
        cout << "Nilai UTS\t: " << mhs.nilai.nilaiUTS << endl;
        cout << "Nilai UAS\t: " << mhs.nilai.nilaiUAS << endl;
        break;
    }

    return 0;
}