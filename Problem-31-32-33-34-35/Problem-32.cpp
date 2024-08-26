#include <iostream>
#include <cstdlib>
using namespace std;
int ReadPositiveNumber(string message)
{
    int Num = 0;
    do
    {
        cout << message;
        cin >> Num;
    } while (Num <= 0);
    return Num;
}
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
void FillArrayWithRandomNumbers(int Arr[100], int ArrLength)
{
    for (int i = 0; i <= ArrLength; i++)
    {
        Arr[i] = RandomNumber(1, 100);
    }
}
void invertedArray(int Arr[100], int ArrDestination[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        ArrDestination[i] = Arr[ArrLength - 1 - i];
    }
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int Arr[100], Arr2[100];
    int ArrLength = ReadPositiveNumber("Enter Number of Elements: ");

    FillArrayWithRandomNumbers(Arr, ArrLength);
    cout << "\nArray 1 Elements: ";
    PrintArray(Arr, ArrLength);

    invertedArray(Arr, Arr2, ArrLength);
    cout << "\nArray 2 Elements After Copy Array 1 in revesed order: ";
    PrintArray(Arr2, ArrLength);
    return 0;
}