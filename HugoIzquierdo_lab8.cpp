//Hugo Izquierdo
//February 3rd, 2021
//This program will help the user create and check validity of a strong password 

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void sizeCheckMin(char[], int);
void digitCheck(char[], int);
void comparingPass(char[], char[]);
bool valPass (bool);

int main()
{
    const int MAX_SIZE = 9;
    const int MIN_SIZE = 6;
    char password[MAX_SIZE];
    char passwordV[MAX_SIZE];


    cout << "Please create a password which is at least: \n\n>Six characters long \n>Has no spaces \n>Contains at least one uppercase letter" <<
            "\n>One lowercase letter \n>One number \n>One special character (punctuation)" << endl;
    cin.getline(password, MAX_SIZE);
    sizeCheckMin(password, MIN_SIZE);
    digitCheck(password, MAX_SIZE);

    valpass();
    if(strlen(password) > MIN_SIZE)  
        {   
            cout << "Please re-enter password for verification: " << endl;
            cin.getline(passwordV, MAX_SIZE);
            comparingPass(password, passwordV);
        }
            


    return 0;
}

void sizeCheckMin(char custPass[], int size)
{
    if (strlen(custPass) < size)
        cout << "Please enter at least 6 letters" << endl;
}

void digitCheck(char cusPass[], int size)
{
    bool hasDigit = false;
    bool hasPunct = false;
    bool hasUpper = false;
    bool hasLower = false; 
    
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

     if (!hasDigit)
         cout << "It needs a number" << endl;
     if (!hasPunct)
         cout << "It needs a punctuation" << endl;
     if (!hasUpper)
         cout << "It needs an uppercase letter" << endl;
     if (!hasLower)
         cout << "It needs a lowercase letter" << endl;
 }

 bool validPass(bool)
 {
     digitcheck();
     bool valPass = false;

     if(hasLower = true && hasUpper = true && hasDigit = true && hasPunct = true)
        valPass = true;
    if (valPass)
        cout << "Valpass function is working" << endl;
 }
    

void comparingPass(char cusPass[], char verPass[])
{
    if (strcmp(cusPass, verPass) == 0)
        cout << "The passwords match. Thank you!";
    else
        cout << "The passwords do not match, please try again.";
}

void passesTest()
{
    
}



