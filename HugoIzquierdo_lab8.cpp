//Hugo Izquierdo
//February 3rd, 2021
//This program will help the user create and check validity of a strong password 

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void sizeCheckMin(char[], int);
void digitCheck(char[], int);

int main()
{
    const int MAX_SIZE = 9;
    const int MIN_SIZE = 6;
    char password[MAX_SIZE];
  

    cout << "Please create a password which is at least: \n\n>Six characters long \n>Has no spaces \n>Contains at least one uppercase letter" <<
            "\n>One lowercase letter \n>One number \n>One special character (punctuation)" << endl;
    cin.getline(password, MAX_SIZE);
    sizeCheckMin(password, MIN_SIZE);
    digitCheck(password, MAX_SIZE);

    return 0;
}

void sizeCheckMin(char custPass[], int size)
{
    if (strlen(custPass) < size)
        cout << "Please enter at least 6 letters" << endl;
}

void digitCheck( char cusPass[], int size)
{
    bool hasDigit = false;
    bool hasPunct = false;
    bool hasUpperC = false;
    bool hasLowerC = false;
    for (int count = 0; count < strlen(cusPass); count++)
    {
        if (isdigit(cusPass[count]))
        hasDigit= true;
    }
    if (!hasDigit)
        cout << "It needs a number" << endl;
}

void casing(char cusPass[], int size)
/*void checkPunct()
{
    bool okSize = false;
    cin.getline(password, SIZE);
    for (int i=0; i < strlen(password); i++)
    {
        if (password[i] )
    }

}
*/



