#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>

using namespace std;

void EncryptOrDecrypt(string type)
{
    int rotation;
    cout << "Enter amount of rotation" << endl;
    cin >> rotation;
    cin.ignore();
    int count = 0;
    int length;
    string input;
    cout << type << endl;
    getline(cin, input);
    length = (int)input.length();

    for (count = 0; count < length; count++)
    {
        if (isalpha(input[count]))
        {
            input[count] = tolower(input[count]);
            for (int i = 0; i < rotation; i++)
            {
                if (input[count] == 'z')
                    input[count] = 'a';
                else
                    input[count]++;
            }
        }
    }
    cout << "Results: \n" << input << endl;
} 



void choice() {
    string choice2;
    cout << "Choose between decrypt or encrypt" << endl;
    cin >> choice2;

    if (choice2 == "encrypt" || choice2 == "Encrypt") 
    {
        EncryptOrDecrypt("Type text to encrypt");
    }
    if (choice2 == "decrypt" || choice2 == "Decrypt")
    {
        EncryptOrDecrypt("Type encrypted text to decrypt");
    }

}


int main()
{
    choice();
}