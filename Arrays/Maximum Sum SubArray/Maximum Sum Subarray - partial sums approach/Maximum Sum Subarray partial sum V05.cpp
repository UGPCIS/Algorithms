#include "iostream"

using namespace std;

int const maxLegnth = 10007;

long long maxSubArrayPartial(int a[], int legnth)
{
    int S[maxLegnth], ans = a[1], mim = 0;

    S[1] = a[1];

    for (int i = 1; i <= legnth; i++)
    {
        S[i] = S[i - 1] + a[i];
    }

    for (int i = 1; i <= legnth; i++)
    {
        if(S[i] - mim > ans)
        {
            ans = S[i] - mim;
        }

        if(S[i] < mim)
        {
            mim = S[i];
        }
    }
    
    return ans;

}


int main()
{

    int a[] = {5, -6, 3, 4, 2, 3, -3};

    cout << maxSubArrayPartial(a, 7) << endl;

    return 0;
}