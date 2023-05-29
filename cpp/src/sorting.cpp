#include <iostream>
using namespace std;

struct Mahasiswa{
    int nim;
    string nama;
    double partisipasi, tugas, uts, uas, nilai_akhir;
};

void insertionSort(Mahasiswa arr[], int n){
    Mahasiswa mhs;
    for (int i = 1; i < n; i++){
        mhs = arr[i];
        int j = i - 1;
        while ((j >= 0) && (arr[j].nilai_akhir < mhs.nilai_akhir)){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = mhs;
    }
}

int main(){
    Mahasiswa mhs[6];
    int choice, lots_data = 0;
    do{
        insertionSort(mhs, lots_data);
        cout << "Menu data yang tersedia\t:   1. Tampilkan data" << endl;
        cout << "\t\t\t    2. Tambahkan/set ulang data" << endl;
        cout << "\t\t\t    3. Selesai/Keluar" << endl;
        cout << "Pilih Menu yang diinginkan: "; cin >> choice;
        cout << endl;

        switch (choice){
        case 1:
            cout << "\t\t\tDaftar Nilai Akhir Mahasiswa" << endl;
            cout << "===========================================================================" << endl;
            cout << "No\tNIM\tNama\tPartisipasi\tTugas\tUTS\tUAS\tNilai Akhir" << endl;
            cout << "===========================================================================" << endl;
            for (int i = 0; i < lots_data; i++){
                cout << i + 1 << "\t" << mhs[i].nim << "\t" << mhs[i].nama << "\t" << mhs[i].partisipasi << "\t\t" << mhs[i].tugas << "\t" << mhs[i].uts << "\t" << mhs[i].uas << "\t" << mhs[i].nilai_akhir << endl;
            }
            cout << "===========================================================================\n" << endl;
            break;

        case 2:
            char add_data;
            do{
                cout << "-> Tambahkan/set ulang data" << endl;
                cout << "   banyak data yang dimasukkan: "; cin >> lots_data;
                cout << "   ------------------------------------------------------------------------" << endl;
                for (int i = 0; i < lots_data; i++){
                    cout << "   NIM\t\t: "; cin >> mhs[i].nim;
                    cout << "   Nama\t\t: "; cin >> mhs[i].nama;
                    cout << "   Partisipasi\t: "; cin >> mhs[i].partisipasi;
                    cout << "   Nilai Tugas\t: "; cin >> mhs[i].tugas;
                    cout << "   Nilai UTS\t: "; cin >> mhs[i].uts;
                    cout << "   Nilai UAS\t: "; cin >> mhs[i].uas;
                    cout << "   ------------------------------------------------------------------------" << endl;
                    mhs[i].nilai_akhir = (mhs[i].partisipasi * 0.2) + (mhs[i].tugas * 0.3) + (mhs[i].uts * 0.2) + (mhs[i].uas * 0.3);
                }
                cout << "   !!! data berhasil ditambahkan !!!" << endl;
                cout << "Ingin merubah ulang data (y/n): "; cin >> add_data;
                cout << endl;
            } while (add_data == 'y');
            break;

        default:
            if (choice != 3){
                cout << "-> " << choice << " ???" << endl;
                cout << "   menu tidak tersedia, silahkan pilih kembali\n" << endl;
                break;
            }
        }
    } while (choice != 3);

    return 0;
}