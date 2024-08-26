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
void FillArrayWithRandomNumber(int Arr[100], int ArrLength)
{
    // This Function has been modified.
    for (int i = 0; i < ArrLength; i++)
    {
        Arr[i] = RandomNumber(1, 100);
    }
}
void PrintArray(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        cout << Arr[i] << " ";
    }
}
void SumtheNumberInArray(int Arr[100], int Arr2[100], int ArrLength, int SumArr[100])
{
    for (int i = 0; i < ArrLength; i++)
    {
        SumArr[i] = Arr[i] + Arr2[i];
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int Arr[100], ArrLength, Arr2[100], SumArr[100], SumLength;

    ArrLength = ReadPositiveNumber("How many Number: ");

    FillArrayWithRandomNumber(Arr, ArrLength);
    FillArrayWithRandomNumber(Arr2, ArrLength);

    cout << "\nArray 1 Elements: ";
    PrintArray(Arr, ArrLength);

    cout << "\nArray 2 Elements: ";
    PrintArray(Arr2, ArrLength);

    SumtheNumberInArray(Arr, Arr2, ArrLength, SumArr);
    cout << "\nSum Tow Array is: ";
    PrintArray(SumArr, ArrLength);
    return 0;
}