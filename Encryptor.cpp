#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
#include <stdlib.h>
#include "conversion.h"

using namespace std;

int main(){
    string pass, site;
    char option;
    fstream file;
    cout << "=========[ ALL PASSWORDS ARE STORED IN PASSWD FILE ]=========" << endl;
    cout << "Enter the password : ";
    cin >> pass;

    for (int i = 0; i < pass.length(); i++)
    {
        pass[i] = tolower(pass[i]);
        for (int x = 0; x <= 26; x++) 
        {
            static char letter = 'a';
            replace( pass.begin(), pass.end(), letter, list[x]); 
            letter = static_cast<char>(letter + 1);
        }
    }

    cout << "Name of site : ";
    cin >> site;
    cout << "Your Encrypted Password is : " << pass << endl;
    cout << "Do u want to store this password? [y/n]" << endl;
    cin >> option;

    switch(tolower(option) == 'y') 
    {
        case true:
            file.open("PASSWD.txt", ios::app);
            file << "     <====>" << endl;
            file << "Name of site : " << site << endl;
            file << "Password is : " <<  pass << endl;
            file.close();
            break;

        case false:
            return 0;
            break;

        default:
            abort();
    }
    return 0;
}