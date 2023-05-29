#include <iostream>
using namespace std;

int main(){
    char namasiswa[5][10] = {"suprapto", "mahmudi", "albert", "bagong", "elizabeth"};
    float nilaisiswa[5][5] = {{76,58,90,66,78}, {78,60,45,65,25}, {80,78,75,91,67}, {98,85,80,75,77}, {60,56,78,90,76}};
    
    int jumlahsiswa;
    cout << "========= data nilai rapor siswa =========" << endl;
    cout << "input jumlah siswa: "; cin >> jumlahsiswa;
    for (int i = 0; i < jumlahsiswa; i++){
        cout << "nama siswa ke-" << i+1 <<": "; cin >> namasiswa[i];
    }
    cout << endl;
    double average[5];
    for (int j = 0; j < 5; j++){
        double total = 0;
        for (int i = 0; i < 5; i++){
            total += nilaisiswa[i][j];
        }
        average[j] = total / 5;
    }
    for (int i = 0; i < jumlahsiswa; i++){
        cout << "rapor siswa: " << namasiswa[i] << endl;
        for (int j = 0; j < 5; j++){
            cout << "pelajaran " << j+1 << ": " << nilaisiswa[i][j] << "    ";
            cout << "rata - rata kelas: " << average[j] << endl;
        }
        if (i != jumlahsiswa - 1){
            cout << endl;
        }
    }
    
    return 0;
}