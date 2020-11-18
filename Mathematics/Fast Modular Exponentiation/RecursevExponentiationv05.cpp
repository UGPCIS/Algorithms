#include "iostream"

using namespace std;

int Expenentiation(long long a, long long n, long long mod)
{
    if(n == 0)
        return 1;

    if(n % 2 == 0)
    {
        return (Expenentiation((a * a) % mod, n / 2, mod)) % mod;
    }

    return (a * Expenentiation(a, n - 1, mod)) % mod;
}

 int main()
 {

     cout << Expenentiation(2, 5, 100000000007) << endl;

     return 0;
 }