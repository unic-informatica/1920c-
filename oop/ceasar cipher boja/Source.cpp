#include <iostream>
#include <Windows.h>
#include <string>
#include <string.h>

using namespace std;

void encrypt()
{
    string input;
    int count = 0;
    int length;
    cout << "enter text" << endl;
    getline(cin, input);
    length = (int)input.length();

    for (count = 0; count < length; count++)
    {
        if (isalpha(input[count]))
        {
            input[count] = tolower(input[count]);
            for (int i = 0; i < 1; i++)
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

/*
void decrypt() 
{
    string input;
    int count = 0;
    int length;
    cout << "enter text" << endl;
    getline(cin, input);
    length = (int)input.length();

    for (count = 0; count < length; count++)
    {
        if (isalpha(input[count]))
        {
            input[count] = tolower(input[count]);
            for (int i = 0; i < 1; i++)
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
/**/


int main()
{
    encrypt();

}