#include <iostream>
#include <stdio.h>
using namespace std;

int pangkat(int a, int b)
{
    // int i, bil = 1;
    // for (i = 1; i <= b; i++){
    //     bil = bil * a;
    // }
    // return bil;

    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * pangkat(a, b - 1);
    }
}

int main()
{
    int x, y, hasil;
    // printf("masukkan bilangan: "); scanf("%i", &x);
    cout << "masukkan bilangan\t: ";
    cin >> x;

    // printf("masukkan pangkat: "); scanf("%i", &y);
    cout << "masukkan pangkat\t: ";
    cin >> y;

    hasil = pangkat(x, y);
    // printf("hasil: %i\n", hasil);
    cout << "hasil perhitungan\t: " << hasil << endl;
    return 0;
}