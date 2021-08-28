#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    long int i;
    string pass,site;
    char Q;
    fstream file;
    cout << "=========[ ALL PASSWORDS ARE STORED IN PASSWD FILE ]=========" << endl;
    cout << "Enter the password : ";
    cin >> pass;
    for (i = 0; i < pass.length(); i++)
    {
        pass[i] = tolower(pass[i]);
        if (pass[i] == 'a'){
            pass[i] = '#';
        }

        else if (pass[i] == 'b'){
            pass[i] = '$';
        }

        else if (pass[i] == 'c'){
            pass[i] = 'p';
        }

        else if (pass[i] == 'd'){
            pass[i] = 'L';
        }

        else if (pass[i] == 'e'){
            pass[i] = 'M';
        }


        else if (pass[i] == 'f'){
            pass[i] = 'D';
        }

        else if (pass[i] == 'g'){
            pass[i] = '{';
        }

        else if (pass[i] == 'h'){
            pass[i] = 'Q';
        }

        else if (pass[i] == 'i'){
            pass[i] = '&';
        }

        else if (pass[i] == 'j'){
            pass[i] = '7';
        }

        else if (pass[i] == 'k'){
            pass[i] = '0';
        }

        else if (pass[i] == 'l'){
            pass[i] = '9';
        }

        else if (pass[i] == 'm'){
            pass[i] = 'a';
        }

        else if (pass[i] == 'n'){
            pass[i] = '%';
        }

        else if (pass[i] == 'o'){
            pass[i] = '6';
        }

        else if (pass[i] == 'p'){
            pass[i] = 'E';
        }

        else if (pass[i] == 'q'){
            pass[i] = 'q';
        }

        else if (pass[i] == 'r'){
            pass[i] = 'h';
        }

        else if (pass[i] == 's'){
            pass[i] = 'b';
        }

        else if (pass[i] == 't'){
            pass[i] = 'm';
        }

        else if (pass[i] == 'u'){
            pass[i] = '@';
        }

        else if (pass[i] == 'v'){
            pass[i] = 'g';
        }

        else if (pass[i] == 'w'){
            pass[i] = 'x';
        }

        else if (pass[i] == 'x'){
            pass[i] = 't';
        }

        else if (pass[i] == 'y'){
            pass[i] = 'u';
        }

        else if (pass[i] == 'z'){
            pass[i] = 'z';
        }
    }
    cout << "Name of site :";
    cin >> site;
    cout << "Your Encrypted Password is : " << pass << endl;
    cout << "Do u want  to store this password? [y/n]" << endl;
    cin >> Q;

    if (tolower(Q) == 'y'){    
        file.open("PASSWD.txt", ios::app);
        file << "     <====>" << endl;
        file << "Name of site : " << site << endl;
        file << "Password is : " <<  pass << endl;
        file.close();
        }

    return 0;
}