#include <iostream>
using namespace std;

void fun(int n)
{
    int i, j, k, count = 0;
    for (i = n / 2; i <= n; i++)
    {
        for (j = 1; j <= n; j = 2 * j)
        {
            for (k = 1; k <= n; k++)
            {
                count++;
            }
        }
    }
}
void fun(int n)
{
    int i = 1;
    while (i < n)
    {
        int j = n;
        while (j > 0)
        {
            j = j / 2;
        }
        i = 2 * i;
    }
}

int main()
{
    int i, j, k, count;
    fun;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << count << endl;
    return 0;
}