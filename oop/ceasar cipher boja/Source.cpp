#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>

using namespace std;

int main()
{
    cin << choice << "choose now";
    if (choice == "decrypt") {
        ;

    }
    if (choice == "encrypt") {
        ;
    }

    cin.ignore()

    string input;
    int count = 0;
    int length;
    getline(cin, input);
    length = (int)input.length();

    
    for (count = 0; count < length; count++)
    {
        if (isalpha(input[count]))
        {
            input[count] = tolower(input[count]);
            for (int i = 0; i < 14; i++)
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