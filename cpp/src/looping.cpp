#include <iostream>
using namespace std;

int main()
{
    int number = 10;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j % 4 == 1)
            {
                cout << "*";
            }
            else if (j % 4 == 2)
            {
                cout << "#";
            }
            else if (j % 4 == 3)
            {
                cout << "$";
            }
            else if (j % 4 == 0)
            {
                cout << "%";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }
}