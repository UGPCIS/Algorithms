#include "iostream"

using namespace std;

const int maxIndex = 100007;

int valuesArray[maxIndex];
int updateArray[maxIndex];
int partialSum[maxIndex];


void AddValues(int index)
{
    valuesArray[index] += partialSum[index];    
}

void updateFunction(int x, int y, int value)
{
    updateArray[x] = value;
    updateArray[y + 1] = -value;
}

void calculatePartialSumUpdateArray(int lenght)
{
    for (int i = 0; i < lenght; i++)
    {
        if (i == 0)
            partialSum[i] = updateArray[i];
        else
        {
            partialSum[i] = partialSum[i -1] + updateArray[i];
        }

        AddValues(i);
    }
}

int main()
{
    return 0;
}