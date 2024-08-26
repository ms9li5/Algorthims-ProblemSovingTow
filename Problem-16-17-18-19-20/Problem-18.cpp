#include <iostream>
#include <string>
using namespace std;
string ReadText()
{
    string Text;
    cout << "Enter the Text" << endl;
    getline(cin, Text);
    return Text;
}
string EncryptText(string Text, int EncryptionKay)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] + EncryptionKay);
    }
    return Text;
}
string DecryptText(string Text, int EncryptionKay)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i] = char((int)Text[i] - EncryptionKay);
    }
    return Text;
}
int main()
{
    const short EncryptionKay = 5;
    string Text = ReadText();
    string TextAfterEncryption = EncryptText(Text, EncryptionKay);
    string TextAfterDecryption = DecryptText(TextAfterEncryption, EncryptionKay);

    cout << "\nText Before Encryption: " << Text << endl;
    cout << "Text After Encryption: " << TextAfterEncryption << endl;
    cout << "Text After Decryption: " << TextAfterDecryption << endl;
    return 0;
}