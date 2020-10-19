#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int value)
{
    if(value <= 1)
        return false;

    for (int i = 2; i <= sqrt(value); i++)
    {
        if(value % i == 0)
            return false;
    }

    return true;
    
}

int main()
{

    cout << isPrime(0) << endl;

    return 0;
}