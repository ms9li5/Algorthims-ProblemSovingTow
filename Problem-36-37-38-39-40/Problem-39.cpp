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
void AddArrayElement(int Number, int arr[100], int &arrLength)
{
    // its a new element so we need to add the length by 1
    arrLength++;
    arr[arrLength - 1] = Number;
}
void CopyOnlyPrimeUsingAddArrayElement(int ArrSource[100], int ArrDestination[100], int ArrLength, int &Arr2Length)
{
    for (int i = 0; i < ArrLength; i++)
    {
        if (checkPrime(ArrSource[i]) == enPrimeNotPrime::Prime)
        {
            AddArrayElement(ArrSource[i], ArrDestination, Arr2Length);
        }
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
    int Arr[100], ArrLength;
    FillArrayWithRandomNumbers(Arr, ArrLength);
    int Arr2[100], Arr2Length;
    CopyOnlyPrimeUsingAddArrayElement(Arr, Arr2, ArrLength, Arr2Length);
    cout << "\nArray 1: ";
    PrintArray(Arr, ArrLength);
    cout << "\nArray 2 After Copy only Prime: ";
    PrintArray(Arr2, Arr2Length);
    return 0;
}