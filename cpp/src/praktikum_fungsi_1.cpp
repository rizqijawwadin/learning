#include <iostream>
using namespace std;
int ganjilgenap(int);

int main(){
    int number, result;
    cout << "masukkan angka: "; cin >> number;
    result = ganjilgenap(number);
    cout << "0(genap)/1(ganjil):" << endl;
    cout << result << endl;

    return 0;
}

int ganjilgenap(int x){
    x = x % 2;
    return x;
}