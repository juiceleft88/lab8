//Hugo Izquierdo
//February 3rd, 2021
//This program will help the user create and check validity of a strong password 

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void sizeCheck(char[], int)

int main()
{
    const int SIZE = 9;
    char password[SIZE];

    cout << "Please create a password which is at least: \n\n>Six characters long \n>Has no spaces \n>Contains at least one uppercase letter" <<
            "\n>One lowercase letter \n>One number \n>One special character (punctuation)" << endl;
    cin.getline(password, SIZE);

    sizeCheck(password, SIZE);




    return 0;
}

void sizeCheck(char custPass[], int size)
{
    int sizeTst = 0;
    while (password[sizeTst] != size)
        cout << "Please make sure to follow instructions for password creation." << endl;
}