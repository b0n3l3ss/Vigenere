// Jonas Fahrney

using namespace std;
#include <iostream>
#include <string>
#include <fstream>
#include <regex>

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
	}


	return 0;
}