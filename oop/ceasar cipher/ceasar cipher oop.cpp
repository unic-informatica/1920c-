#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>

using namespace std;

void versleutelofontsleutel(string type)
{
    int rotation;
    cout << "voer de hoeveelheid rotatie in" << endl;
    cin >> rotation;
    cin.ignore();
    int count = 0;
    int lengte;
    string input;
    cout << type << endl;
    getline(cin, input);
    lengte = (int)input.length();

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
    cout << "resultaat: \n" << input << endl;
} 



void choice() {
    string choice2;
    cout << "kies tussen versleutelen en ontsleutelen" << endl;
    cin >> choice2;

    if (choice2 == "versleutel" || choice2 == "Versleutel") 
    {
        versleutelofontsleutel("Typ tekst om te versleutelen");
    }
    if (choice2 == "ontsleutel" || choice2 == "Ontsleutelen")
    {
        versleutelofontsleutel("Typ versleutelde tekst om te ontsleutelen");
    }

}


int main()
{
    choice();
}