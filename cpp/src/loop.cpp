#include <iostream>
using namespace std;

int main(){
    
    int n, min, max,jumlah = 0;
    cout << "===== daftar nilai mahasiswa =====" << endl;
    cout << "----------------------------------" << endl;
    cout << "jumlah data yang diinputkan: ";
    cin >> n;
    cout << endl;
    
    int nilai;
    for (int i = 1; i <= n; i++){
        cout << "nilai ke-" << i << " : ";
        cin >> nilai;
        if (i == 1){
            min = nilai;
            max = nilai;
        } else{
            if (nilai > max){
                max = nilai;
            }
            if (nilai < min){
                min = nilai;
            }
        }
        jumlah += nilai;
    }

    cout << "----------------------------------" << endl;
    cout << "nilai minimal  : " << min << endl;
    cout << "nilai maksimal : " << max << endl;
    cout << "nilai rata-rata: " << jumlah / n << endl;
    
    return 0;
}