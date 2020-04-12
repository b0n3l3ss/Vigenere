// Jonas Fahrney

using namespace std;
#include <iostream>
#include <string>
#include <fstream>
#include <regex>

int returnInt(char input);
string returnChar(int input);
string encrypt(string plainText, string keyword);

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
		string output = ""; // finish this jonas
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
string returnChar(int input) {
	if (input == 0)
		return "a";
	else if (input == 1)
		return "b";
	else if (input == 2)
		return "c";
	else if (input == 3)
		return "d";
	else if (input == 4)
		return "e";
	else if (input == 5)
		return "f";
	else if (input == 6)
		return "g";
	else if (input == 7)
		return "h";
	else if (input == 8)
		return "i";
	else if (input == 9)
		return "j";
	else if (input == 10)
		return "k";
	else if (input == 11)
		return "l";
	else if (input == 12)
		return "m";
	else if (input == 13)
		return "n";
	else if (input == 14)
		return "o";
	else if (input == 15)
		return "p";
	else if (input == 16)
		return "q";
	else if (input == 17)
		return "r";
	else if (input == 18)
		return "s";
	else if (input == 19)
		return "t";
	else if (input == 20)
		return "u";
	else if (input == 21)
		return "v";
	else if (input == 22)
		return "w";
	else if (input == 23)
		return "x";
	else if (input == 24)
		return "y";
	else if (input == 25)
		return "z";
	else
		return "!";
}
string encrypt(string plainText, string keyword) {

	string output = "";
	int keywordCounter = 0;
	for (int i = 0; i < plainText.length(); ++i) {
		if (keywordCounter >= keyword.lentgh())
			keywordCounter = 0;
		output = output + returnChar(returnInt(plainText[i] + keyword[keywordCounter]));
		++keywordCounter;
	}
	return output;
}