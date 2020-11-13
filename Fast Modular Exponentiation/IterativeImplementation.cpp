#include "iostream"

using namespace std;

int fastExpo(int a, long long n, int mod)
{
    long long ans = 1;

    while (n > 0)
    {

        if (n % 2 != 0)
        {
            ans = (1LL * ans * a) % mod;
            n--;
        }
        else
        {
            a = (1LL * a * a) % mod;

            n /= 2;
        }
    }

    return ans;
}

int main()
{

    cout << fastExpo(7, 0, 10000000007) << endl;

    return 0;
}