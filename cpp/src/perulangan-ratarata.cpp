#include <iostream>
using namespace std;

int main(){
    int nilai, total = 0;
    double average;
    cout << "menghitung rata - rata" << endl;
    cout << "inputkan nilai:" << endl;
    for (int i = 0; i < 5; i++){
        cout << "nilai ke-" << i+1 << ": "; cin >> nilai;
        total += nilai;
    }
   
    average = total / 5;
    cout << "rata - rata adalah: " << average << endl;

    return 0;
}