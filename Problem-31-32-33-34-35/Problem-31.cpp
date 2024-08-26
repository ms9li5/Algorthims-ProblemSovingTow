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
void FillArrayform1toN(int Arr[100], int ArrLength)
{
    for (int i = 0; i <= ArrLength; i++)
    {
        Arr[i] = i + 1;
    }
}
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
void SwapNumber(int &Num1, int &Num2)
{
    int Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 = Temp;
}
void Shuffle(int Arr[100], int ArrLength)
{
    for (int i = 0; i < ArrLength; i++)
    {
        SwapNumber(Arr[RandomNumber(1, ArrLength) - 1], Arr[RandomNumber(1, ArrLength) - 1]);
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
    int Arr[100], Arrlength = ReadPositiveNumber("Enter Number Of Elements: ");

    FillArrayform1toN(Arr, Arrlength);

    cout << "\nThe Array Before Shuffle: ";
    PrintArray(Arr, Arrlength);

    Shuffle(Arr, Arrlength);
    cout << "\nThe Array After Shuffle: ";
    PrintArray(Arr, Arrlength);
    return 0;
}