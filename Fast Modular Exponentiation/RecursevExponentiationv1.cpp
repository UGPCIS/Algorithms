#include "iostream"

using namespace std;


int recursevExponenetiation(long long a, long long n, long long mod)
{

    if(n == 0)
        return 1;

    if(n % 2 == 0)
    {
        return recursevExponenetiation((a * a) % mod, n / 2, mod);
    }

    return ((a) * recursevExponenetiation(a, n -1 , mod)) % mod;

}

int main()
{

    cout << recursevExponenetiation(4, 5, 10000000000) << endl;

    return 0;
}