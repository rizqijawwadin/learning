#include <iostream>
using namespace std;

int main(){
    int m, n, o;
    cout << "======= data nilai mahasiswa =======" << endl;
    cout << "jumlah mahasiswa yang diinputkan: "; cin >> m;
    cout << "banyak nilai yang diinputkan: "; cin >> n;
    cout << endl;

    string name[m];
    int score[n];
    for (int i = 0; i < m; i++){
        cout << "nama mahasiswa: "; cin >> name[i];
        for (int j = 0; j < n; j++){
            cout << "nilai mahasiswa ke-" << j+1 << ": ";
            cin >> score[j];
        }
        if (i != m - 1){
            cout << endl;
        }
    }
    cout << "====================================" << endl;
    for (int i = 0; i < m; i++){
        cout << "status nilai " << name[i] << endl;
        cout << "nilai yang lulus: ";
        for (int j = 0; j < n; j++){
            if (score[j] >= 60){
                cout << score[j] << " ";
            }
        }
        if (i != m - 1){
            cout << endl;
        }
        cout << endl;
    }
    cout << "============= congrats =============" << endl;
    
    return 0;
}