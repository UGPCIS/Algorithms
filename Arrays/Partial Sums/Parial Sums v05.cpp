#include "iostream";

using namespace std;

const int sMax = 100007;

int sums[sMax];

void setUpArray(int a[], int lenght)
{

    for (int i = 0; i < lenght; i++)
    {
        if(i = 0)
            sums[i] = a[i];
        else
        {
            sums[i] = sums[i - 1] + a[i];
        }
        
    }
}

long long sumArrayQuery(int x, int y)
{
    return sums[x - 1] - sums[y];
}

int main()
{
    return 0;
}