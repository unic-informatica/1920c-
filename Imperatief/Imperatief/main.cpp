//Ceaser cipher imperatief
#include <iostream>
#include <string>

using namespace std;



int main() {

	int Rotatie;
	string input = "";
	string janee = "";

	char alfabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	cout << "Wil je encrypten of decrypten? ja of nee: "; cin >> janee; cout << endl;

	if (janee == "ja" || janee == "Ja") {
		cout << "Tekst: ";
		cin >> input;
		cout << endl;
		cout << "Encryptie rotatie: ";
		cin >> Rotatie;

		for (int i = 0; i < input.length(); i++) {
			for (int j = 0; j < 26; j++) {
				if (input[i] == alfabet[j]) {
					input[i] = alfabet[j + Rotatie];
					if (j > 26) {
						j -= 26;
						input[i] = alfabet[j];
					}
					else if (j < 0) {
						j += 26;
						input[i] = alfabet[j];
					}
					break;
				}
			}

		}
		cout << endl << "de uitkomst is: " << input << endl;
	}
	else if (janee == "nee" || janee == "Nee") {
		cout << "Tekst: ";
		cin >> input;
		cout << endl;
		cout << "Encryptie rotatie: ";
		cin >> Rotatie;

		for (int i = 0; i < input.length(); i++) {
			for (int j = 0; j < 26; j++) {
				if (input[i] == alfabet[j]) {
					input[i] = alfabet[j - Rotatie];
					if (j > 26) {
						j -= 26;
						input[i] = alfabet[j];
					}
					else if (j < 0) {
						j += 26;
						input[i] = alfabet[j];
					}
					break;
				}
			}

		}
		cout << endl << "de uitkomst is: " << input << endl;
	}
	else
		cout << "foutmelding" << endl;
	system("pause");
	return 0;
}

