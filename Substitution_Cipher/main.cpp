#include<iostream>
#include<string>
using namespace std;
int main(){
    string alphabet{"$ abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{" $QWERTYUIOPASDFGHJKLZXCVBNMmnbvcxzlkjhgfdsapoiuytrewq"};
    
    string secret_msg{};
    cout << "Enter your secret message: ";
    getline(cin,secret_msg);
    
    string encrypted_msg {};
    
    cout << "\nEncrypting message..." << endl;
    
    for(char c: secret_msg){
        size_t position = alphabet.find(c);
        if(position != string::npos){
            char new_char { key.at(position) };
            encrypted_msg += new_char;
        } else {
            encrypted_msg += c;
        }
    }
    cout << "\nEncrypted message: " << encrypted_msg << endl;
    
    string decrypted_msg {};
    cout << "\nDecrypting message..." << endl;
    
    for(char c: encrypted_msg){
        size_t position = key.find(c);
        if(position != string::npos) {
            char new_char { alphabet.at(position) };
            decrypted_msg += new_char;
        } else {
            decrypted_msg += c;
        }
    }
    cout << "\nDecrypted message: " << decrypted_msg << endl;
    cout << endl;
    return 0;
}