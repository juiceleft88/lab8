//Hugo Izquierdo
//February 3rd, 2021
//This program will help the user create and check validity of a strong password 

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void sizeCheckMin(char[], int);
void digitCheck(char[], int, int);
void comparingPass(char[], char[]);

int main()
{
    const int MAX_SIZE = 9;
    const int MIN_SIZE = 6;
    char password[MAX_SIZE];
    char passwordV[MAX_SIZE];

    cout << "Please create a password which is at least: \n\n>Six characters long \n>Has no spaces \n>Contains at least one uppercase letter" <<
            "\n>One lowercase letter \n>One number \n>One special character (punctuation)" << endl;

    digitCheck(password, MAX_SIZE, MIN_SIZE);
        
    if(strlen(password) > MIN_SIZE)  
        {   
            cout << "Please re-enter password for verification: " << endl;
            cin.getline(passwordV, MAX_SIZE);
            comparingPass(password, passwordV);
        } 

    return 0;
}

void digitCheck(char cusPass[], int size, int sizeMin)
{
    bool hasDigit = false;
    bool hasPunct = false;
    bool hasUpper = false;
    bool hasLower = false; 
    
    do
    {
        cout << "Enter a Password: " << endl;
        cin.getline (cusPass, size);

        for (int count = 0; count < strlen(cusPass); count++)
        {
            if (isdigit(cusPass[count]))
                hasDigit= true;

            if (ispunct(cusPass[count]))
                hasPunct = true;

            if (isupper(cusPass[count]))
                hasUpper = true;

            if (islower(cusPass[count]))
                hasLower = true;
         
        }
       
        if (strlen(cusPass) < sizeMin)
            cout << "Please enter at least 6 letters" << endl;
        if (!hasDigit)
            cout << "Your password is missing a number" << endl;
        if (!hasPunct)
            cout << "Your password is missing a special character" << endl;
        if (!hasUpper)
            cout << "Your password is missing an uppercase letter" << endl;
        if (!hasLower)
            cout << "Your password is missing a lowercase letter" << endl;
    }
    while (!hasDigit || !hasPunct || !hasUpper || !hasLower ||(strlen(cusPass) < sizeMin));
 }
 

void comparingPass(char cusPass[], char verPass[])
{
    if (strcmp(cusPass, verPass) == 0)
        cout << "Your password has been saved. Thank you!";
    else
        cout << "The passwords do not match, please try again.";
}
