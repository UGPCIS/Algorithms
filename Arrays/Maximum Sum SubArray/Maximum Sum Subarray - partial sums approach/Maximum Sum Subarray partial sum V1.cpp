#include "iostream"

using namespace std;

int const maxLegnth = 10007;

long long PartialSum(int a[], int legnth)
{
    int partialSum[maxLegnth], ans = a[1], mim = 0;

    partialSum[1] = a[1];

    for(int i = 1; i <= legnth; i++)
    {
        partialSum[i] = partialSum[i - 1] + a[i];
    }

    for (int i = 1; i <= legnth; i++)
    {
        if(partialSum[i] - mim > ans)
        {
            ans = partialSum[i] - mim;
        }

        if(partialSum[i] < mim)
        {
            mim = partialSum[i];
        }
    }
    

    return ans;

}


int main()
{

     int a[] = {5, -6, 3, 4, 2, 3, -3};

    cout << PartialSum(a, 7) << endl;

    return 0;
}