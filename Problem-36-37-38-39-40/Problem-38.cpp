// Copy Odd Number to a new Array.
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
        arr[i] = RandomNumber(1, 100);
}
void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    // its a new element so we need to add the length by 1
    arrLength++;
    arr[arrLength - 1] = Number;
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
void CopyOddNumberInArray(int ArrSource[100], int ArrDestaition[100], int ArrLength, int &Arr2Length)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (ArrSource[i] % 2 != 0)
        {
            AddArrayElement(ArrSource[i], ArrDestaition, Arr2Length);
        }
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int Arr[100], ArrLength = 0, Arr2Length = 0;
    FillArrayWithRandomNumbers(Arr, ArrLength);
    int Arr2[100];
    CopyOddNumberInArray(Arr, Arr2, ArrLength, Arr2Length);

    cout << "\nArray 1: ";
    PrintArray(Arr, ArrLength);
    cout << "\nArray 2 Odd number: ";
    PrintArray(Arr2, Arr2Length);
    return 0;
}