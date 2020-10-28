#include <iostream>
#include <cmath>

using namespace std;

int f[100], expo[100], len = 0;

void PrimeFac(int m)
{
    if(m <= 1)
    {
        f[len] = 2;
        expo[len] = 0;
        len++;
        return;
    }

    int a = 2;

    while (m > 1  && sqrt(m) >= a)
    {
        int e = 0;

        while (m % a == 0)
        {
            e++;

            m /= a;
        }

        if(e > 0)
        {
            f[len] = a;
            expo[len] = e;
            len++;
        }
        
        a++;
    }

    if(m > 1)
    {
        f[len] = m;
        expo[len] = 1;

        len++;
    }
}

int main()
{

    PrimeFac(7568);

    for (int i = 0; i < len; i++)
    {
        cout << f[i] << " " << expo[i] << endl;
    }
    

    return 0;
}