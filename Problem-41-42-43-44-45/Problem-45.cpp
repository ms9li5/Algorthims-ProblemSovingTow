#include <iostream>
#include <cstdlib>
using namespace std;
int RandomNumber(int From, int To)
{
    // Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int &arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(-100, 100);
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
int CountNegativeInArray(int Arr[100], int ArrLength)
{
    int Count = 0;
    for (int i = 0; i < ArrLength; i++)
    {
        if (Arr[i] < 0)
            Count++;
    }
    return Count;
}
int main()
{
    srand((unsigned)time(NULL));
    int Arr[100], ArrLength;
    FillArrayWithRandomNumbers(Arr, ArrLength);

    cout << "Array Elements: ";
    PrintArray(Arr, ArrLength);
    cout << "\nNegative Numbers Count is: " << CountNegativeInArray(Arr, ArrLength) << endl;
    return 0;
}