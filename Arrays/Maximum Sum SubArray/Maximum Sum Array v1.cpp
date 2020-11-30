#include "iostream"

using namespace std;

long long maxSum(int a[], int legnth)
{
    int sum = a[1], currentSum = 0;

    for (int i = 0; i < legnth; i++)
    {
        currentSum += a[i];

        if(currentSum > sum)
        {
            sum = currentSum;
        }

        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }

    return sum;
    
}

int main()
{
    int a[] = {5, -6, 3, 4, 2, 3, -3};

    cout << maxSum(a, 7) << endl;

    return 0;
}