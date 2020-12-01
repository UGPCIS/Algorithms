#include "iostream"

using namespace std;

int const maxLegnth = 10007;

long long maxSubArrayPartial(int a[], int legnth)
{
    int s[maxLegnth], ans = a[1], mim = 0;

    s[1] = a[1];

    for (int i = 1; i <= legnth; i++)
    {
        s[i] = s[i - 1] + a[i];
    }

    for (int i = 1; i <= legnth; i++)
    {
        if(s[i] - mim > ans)
        {
            ans = s[i] - mim;
        }

        if(s[i] < mim)
        {
            mim = s[i];
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