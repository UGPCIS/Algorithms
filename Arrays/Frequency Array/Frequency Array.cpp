#include "iostream"

using namespace std;

const int maxValue = 10000000;

int frequancyArray[maxValue];

int CountFrequency(int a[], int legnth)
{
    int count = 0;

    for (int i = 0; i < legnth; i++)
    {
        if(frequancyArray[a[i]] == 0)
            count++;

        frequancyArray[a[i]]++;
    }

    return count;
    
}

int main()
{
    int a [] = {0,0,1,1,12,12,5,3,6,9};
    cout << CountFrequency(a, 10);

    return 0;
}