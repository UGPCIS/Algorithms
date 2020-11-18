#include <iostream>
#include <cmath>

using namespace std;

long long f[100], expo[100], len = 0;

void PrimeFac(long long m)
{
    if(m <= 1)
    {
        f[len] = 2;
        expo[len] = 0;
        len++;
        return;
    }

    long long a = 2;

    while (m > 1 && sqrt(m) >= a)
    {
        long long e = 0;

        while (m % a == 0)
        {
           e++;
           m/= a;
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

    PrimeFac(77145199750673);

    for (long long i = 0; i < len; i++)
    {
        cout << f[i] << " " << expo[i] << endl;
    }
    

    return 0;
}