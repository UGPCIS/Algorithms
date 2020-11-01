#include "iostream"
#include "cmath"

using namespace std;

const int Nmax = 100001;

bool isPrimeNumbers[Nmax];


// Big O of limit * log(limit)
void SieveOfEratosthenses(int limit)
{
    for (int i = 0; i < limit; i++)
    {
        isPrimeNumbers[i] = true;
    }

    for (int i = 2; i <= limit/2; i++)
    {
        if(isPrimeNumbers[i])
        {
            for (int j = i * 2; j <= limit; j += i)
            {
                isPrimeNumbers[j] = false; 
            }
            
        }
    }
    
    
}
// Big O of Sqir of N
bool isPrime(int value)
{
    if(value <= 1)
        return false;

    for (int i = 2; i <= sqrt(value); i++)
    {
        if(value%i == 0)
            return false;
    }
        
    return true;
}

int main()
{
    SieveOfEratosthenses(100);

    for (int i = 2; i < 100; i++)
    {
        if(isPrimeNumbers[i])
        {
            cout<< i << endl;
        }
    }
    

    return 0;
}