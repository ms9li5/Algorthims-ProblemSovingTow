#include <iostream>
#include <cmath>
using namespace std;
enum enPrimeNotPrime
{
    Prim = 1,
    NotPrime = 2
};
float ReadPositiveNumber()
{
    float Num = 0;
    do
    {
        cout << "Enter the Positive Number: ";
        cin >> Num;
    } while (Num <= 0);
    return Num;
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
    return enPrimeNotPrime::Prim;
}
void PrintPrimeNumberForm1toN(int Num)
{
    cout << "\n";
    cout << "Prime Numbers from " << 1 << " to " << Num << endl;
    cout << "are: " << endl;
    for (int i = 1; i <= Num; i++)
    {
        if (checkPrime(i) == enPrimeNotPrime::Prim)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    PrintPrimeNumberForm1toN(ReadPositiveNumber());
    return 0;
}