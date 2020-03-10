// Ceaser Cipher functioneel programeren
#include <iostream>
#include <string>
using namespace std;



string encrypt(string In, int a) {
	
	char alfabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	for (int i = 0; i < In.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (In[i] == alfabet[j]) {
				In[i] = alfabet[j + a];
				if (j > 26) {
					j -= 26;
					In[i] = alfabet[j];
				}
				else if (j < 0) {
					j += 26;
					In[i] = alfabet[j];
				}
				break;
			}
		}

	}

	return In;
}
string decrypt(string In, int a) {
	char alfabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	for (int i = 0; i < In.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if (In[i] == alfabet[j]) {
				In[i] = alfabet[j - a];
				if (j > 26) {
					j -= 26;
					In[i] = alfabet[j];
				}
				else if (j < 0) {
					j += 26;
					In[i] = alfabet[j];
				}
				break;
			}
		}

	}

	return In;
}
void input() {
	int a;
	string input = "";
	string Yn = "";
	cout << "Wil je encrypten of decrypten? ja/nee: "; cin >> Yn; cout << endl;
	if (Yn == "ja" || Yn == "Ja") {
		cout << "Tekst: ";
		cin >> input;
		cout << endl;
		cout << "Encryptie rotatie: ";
		cin >> a;

		cout << endl << "de uitkomst is: " << encrypt(input, a) << endl;
	}
	else if (Yn == "Nee" || Yn == "nee") {
		cout << "Tekst: ";
		cin >> input;
		cout << endl;
		cout << "Encryptie rotatie: ";
		cin >> a;

		cout << endl << "de uitkomst is: " << decrypt(input, a) << endl;
	}
	else
		cout << "fout";
	
}
int main() {

	input();
	system("pause");
	return 0;

}