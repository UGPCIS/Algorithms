#include <iostream>

using namespace std;

const int sMax = 1000001;

bool isPrime[sMax];

void SieveOfEratosthenes(int n)
{
    for (int i = 2; i < n; i++)
    {
        isPrime[i] = true;
    }

    for (int i = 2; i <= n/2; i++)
    {
        if(isPrime[i])
        {
            for (int j = i * 2; j <= n; j += i)
            {
                isPrime[j] = false;
            }
            
        }
    }
    
    
}

int main()
{

    SieveOfEratosthenes(100);

    for (int i = 2; i < 100; i++)
    {
        if(isPrime[i])
            cout << i << endl;
    }
    

    return 0;
}