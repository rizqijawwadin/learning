#include <iostream>
#include <cstring>
using namespace std;

void main(){
	char string1[100];
	string string11;
	
	cout << "inputkan string: ";
	gets(string1);
	
	strlen(string1);
	cout << "panjang string: " << strlen(string1);
	cout << endl;

	cout << "\nstring menjadi huruf kapital: " << endl;
	strupr(string1);
	cout << string1;
	
	getch();
}