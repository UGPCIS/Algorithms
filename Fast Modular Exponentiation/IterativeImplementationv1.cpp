#include "iostream"

using namespace std;

long long IteExpo(int a, long long n, long long mod)
{
    long long ans = 1;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            a = (1LL * a * a) % mod;
            n /= 2;
        }
        else
        {
            ans = (1LL * ans * a) % mod;
            n--;
        }
    }

    return ans;
}

int main()
{

    cout << IteExpo(30, 100, 10000000007) << endl;

    return 0;
}