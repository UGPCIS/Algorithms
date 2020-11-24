#include "iostream"

using namespace std;

long long maximumSumSubArray(int a[], int length)
{
    long long ans = a[1], sum = 0, left = 0, right = 0;

    for (int i = 0; i < length; i++)
    {
        sum += a[i];

        if(sum > ans)
        {
            ans = sum;
            right = i;
        }

        if(sum < 0)
        {
            sum = 0;
            left = i + 1;
        }
    }

    cout << left << " " << right << endl;

    return ans;
    
}

int main()
{

    int a[] = {5, -6, 3, 4, 2, 3, -3};

    cout << maximumSumSubArray(a, 7) << endl;

    return 0;
}