#include <iostream> 
#include <string>
using namespace std;

int main(){
    int MAKS = 15;
    char nama[MAKS];
	
	cout << "Masukkan nama Anda : ";
	getw(nama); 
	cout << "Halo, " << nama << ".  Selamat belajar string." << endl;
}