#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
enum enCharType
{
    SmallLetter = 1,
    CapitalLetter = 2,
    SpecialCharacter = 3,
    Digit = 4
};
int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}
char GetRandomCharacter(enCharType CharType)

{
    switch (CharType)
    {
    case enCharType::SmallLetter:
        return char(RandomNumber(97, 122));
    case enCharType::CapitalLetter:
        return char(RandomNumber(65, 90));
    case enCharType::SpecialCharacter:
        return char(RandomNumber(33, 47));
    case enCharType::Digit:
        return char(RandomNumber(48, 57));
    }
}
int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}
string GenerateWord(enCharType CharType, short Length)
{
    string word;
    for (int i = 0; i <= Length; i++)
    {
        word += GetRandomCharacter(CharType);
    }
    return word;
}
string GenerateKey()
{
    string Key;
    for (int i = 1; i <= 4; i++)
    {
        Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
    }
    return Key;
}
void GenerateKeys(short NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
        cout << "Key [" << i << "] : ";
        cout << GenerateKey() << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    GenerateKeys(ReadPositiveNumber("Pleas Enter how many Keys do you Want?"));
    return 0;
}