#include <iostream>
#include <vector> 
using namespace std;

const int sMax = 1000001;

bool isPrime[sMax];
vector<int> isPrimeV;

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

    SieveOfEratosthenes(27);

    for (int i = 2; i < 27; i++)
    {
        if(isPrime[i])
            isPrimeV.push_back(i);
    }
    
    for (auto i = isPrimeV.begin(); i != isPrimeV.end(); ++i) 
    {       if(*i + *(i + 1) + 1 == 27)
            cout << 27 << endl;
    }

    return 0;
}