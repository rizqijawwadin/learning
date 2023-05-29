#include <stdio.h>

int main(){
	char nama[] = "aliong";
	char *p;
	
    // cara 1 >> langsung menuju nama array
	p = nama;
	while(*p != NULL){
		printf("%c", *p);
		p++;
	}
	printf("\n");
	
    // caa 2 >> secara eksplisit menunjuk ke elemen pertama array
	p = &nama[0];
	while(*p != NULL){
		printf("%c", *p);
		p++;
	}
	printf("\n");

	return 0;
}