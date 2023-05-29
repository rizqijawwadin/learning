#include <iostream>
using namespace std;
float luasBS(float);
float jmlhluasBS(float, float);

int main(){
    int sisi1, sisi2, large1, large2;
    cout << "== progran menghitung bujursangkar ==" << endl;
    cout << "sisi bujursangkar 1: "; cin >> sisi1;
    cout << "sisi bujursangkar 2: "; cin >> sisi2;
    cout << "=====================================" << endl;
    large1 = luasBS(sisi1);
    large2 = luasBS(sisi2);
    cout << "luas bujursangkar 1: " << large1 << endl;
    cout << "luas bujursangkar 1: " << large2 << endl;
    cout << "jumlah luas kedua bujursangkar: ";
    cout << jmlhluasBS(large1, large2) << endl;

    return 0;
}

float luasBS(float x){
    float luas;
    luas = x * x;
    return luas;
}

float jmlhluasBS(float x, float y){
    float jumlah;
    jumlah = x + y;
    return jumlah;
}