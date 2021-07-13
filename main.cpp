#include <iostream>
#include <string>

using namespace std;

int main(){
	
	const size_t max_len = 256;
	int cipher_inc {};
	char user_input[max_len];
	cout << "Cipher Program" << endl;
	cout << "Enter a secret message: ";
	cin.getline (user_input,max_len);
	cout << "Enter cipher increment (integer): ";
	cin >> cipher_inc;
	
	size_t user_input_len {};
	
	int i=0;
	for (auto c: user_input) {
//		cout << c;
		if (c == '\0') {
			user_input_len = i+1;
			break;
		}
		i++;
	}
	
	char input_text[user_input_len];
	int cipher_int[user_input_len];
	char cipher_text[user_input_len];
	for (int i {0};i<user_input_len;i++){
		input_text[i] = user_input[i];
		cipher_int[i] = input_text[i]+cipher_inc;
		cipher_text[i] = cipher_int[i];
	}	
	
	//	Produce cipher text
	cout << "Output cipher text: ";
	for (auto c: cipher_text) {
		cout << c;
	}
	cout << endl;
	//	Add a gap in console
	cout << endl;
	//Produce the original message again
	cout << "Time to decrypt the message" << endl;
	for (auto i: cipher_int) {
		cout << static_cast<char>(i-cipher_inc);
	}
	cout << endl;
	
	
	return 0;
}