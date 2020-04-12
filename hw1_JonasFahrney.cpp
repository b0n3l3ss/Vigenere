// Jonas Fahrney

using namespace std;
#include <iostream>
#include <string>
#include <fstream>
#include <regex>

int returnInt(char input);
string encrypt(string plainText, string keyWord);

int main() {

	string userInput = "0";
	regex isValid("[12]");
	cout << "Menue for Vigenere Cipher Program" << endl;
	cout << "Press 1 for encryption and 2 for decryption" << endl;
	bool match = regex_search(userInput, isValid);
	if (!match) {
		cout << "Invalid entry" << endl;
		return 0;
	}
	if (userInput == "1") {
		cout << "Enter text file name: ";
		string output = encryptj
	}


	return 0;
}

int returnInt(char input) {
	if (input == 'a')
		return 0;
	else if (input == 'b')
		return 1;
	else if (input == 'c')
		return 2;
	else if (input == 'd')
		return 3;
	else if (input == 'e')
		return 4;
	else if (input == 'f')
		return 5;
	else if (input == 'g')
		return 6;
	else if (input == 'h')
		return 7;
	else if (input == 'i')
		return 8;
	else if (input == 'j')
		return 9;
	else if (input == 'k')
		return 10;
	else if (input == 'l')
		return 11;
	else if (input == 'm')
		return 12;
	else if (input == 'n')
		return 13;
	else if (input == 'o')
		return 14;
	else if (input == 'p')
		return 15;
	else if (input == 'q')
		return 16;
	else if (input == 'r')
		return 17;
	else if (input == 's')
		return 18;
	else if (input == 't')
		return 19;
	else if (input == 'u')
		return 20;
	else if (input == 'v')
		return 21;
	else if (input == 'w')
		return 22;
	else if (input == 'x')
		return 23;
	else if (input == 'y')
		return 24;
	else if (input == 'z')
		return 25;
	else 
		return -1;

}
string encrypt(string plainText, string keyWord) {

	 

}