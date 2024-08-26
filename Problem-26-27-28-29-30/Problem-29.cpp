#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;
enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 2
};
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
enPrimeNotPrime checkPrime(int Num)
{
    int M = round(Num / 2);
    for (int i = 2; i <= M; i++)
    {
        if (Num % i == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}
void FillArrayWithRandomNumber(int Arr[100], int &ArrLength)
{
    cout << "Enter the Length of Array: ";
    cin >> ArrLength;
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
void CopyOnlyPrim(int ArrSource[100], int ArrDestination[100], int ArrLength, int &Arr2Length)
{
    short count = 0;
    for (int i = 0; i < ArrLength; i++)
    {
        if (checkPrime(ArrSource[i]) == ArrSource[i])
        {
            ArrDestination[count] = ArrSource[i];
            count++;
        }
    }
    Arr2Length = --count;
}
int main()
{
    srand((unsigned)time(NULL));

    int Arr[100], ArrLength;
    FillArrayWithRandomNumber(Arr, ArrLength);

    int Arr2[100], Arr2Length;
    CopyOnlyPrim(Arr, Arr2, ArrLength, Arr2Length);

    cout << "\nArray 1 Elements: ";
    PrintArray(Arr, ArrLength);
    cout << "\nPrime Number in Array 1 is: ";
    PrintArray(Arr2, Arr2Length);
    return 0;
}