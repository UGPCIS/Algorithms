#include "iostream"

using namespace std;

const int nMax = 100001;

int frec[nMax];

void Pigeonhole(int n)
{
    int rem = 0;

    for (int i = 1; i <= n ; i++)
    {
        rem = (rem * 10 + 1) % n;

        if(rem % n == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << 1;
            }

            return;
        }

        if(frec[rem] != 0)
        {
            for (int j = 1; j <= i - frec[rem]; j++)
            {
                cout << 1;
            }

            for (int j = 1; j <= frec[rem]; j++)
            {
                cout << 0;
            }
            
            return;
        }

        frec[rem] = i;
    }
    
}


int main()
{

    Pigeonhole(50);

    return 0;
}