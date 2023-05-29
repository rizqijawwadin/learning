#include <iostream>
using namespace std;
float max(float);

int main(){
    float number1, number2;
    cout << "input number 1: "; cin >> number1;
    cout << "input number 2: "; cin >> number2;
    
    
    cout << "bilangan terbesar diantara keduanya adalah: " << max(number2);
}

float max(float x){
    float y;
    if (x > y){
        return (x);
    } else{
        return (y);
    }
}