#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int cek_jumlah(char[],char);

int main(){
	int hasil;
	char sentence[100], huruf;
	
	cout << "masukkan kalimat: "; cin >> sentence;
	cout << "inputkan huruf yang ingin dicari: ";
	gets(sentence);
	hasil = cek_jumlah(sentence, huruf);
	cout << "huruf " << huruf;
	cout << " di kalimat atas sebanyak " << hasil << endl;

	return 0;
}

int cek_jumlah(char sentence[100], char letter){
	int result;
	for (int i = 0; i < strlen(sentence); i++){
		if (letter == sentence[i]){
			result++;
		}
	}
	return result;
}