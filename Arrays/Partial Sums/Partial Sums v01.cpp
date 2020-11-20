#include "iostream"

using namespace std;

const int sMax = 100007;

int sum[sMax];

void ComputSum(int a[], int lenght)
{

    for (int i = 0; i < lenght; i++)
    {
        if(i = 0)
            sum[i] = a[i];
        else
        {
            sum[i] = sum[i -1] + a[i];
        }
        
    }
}

long long Query(int y, int x)
{
    return sum[x] - sum[y - 1];
}


int main()
{
    return 0;
}