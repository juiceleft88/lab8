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
    bool passWord = false;

    cout << "Please create a password which is at least: \n\n>Six characters long \n>Has no spaces \n>Contains at least one uppercase letter" <<
            "\n>One lowercase letter \n>One number \n>One special character (punctuation)" << endl;
    cin.getline(password, MAX_SIZE);
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
    bool minSize = false;
    bool hasDigit = false;
    bool hasPunct = false;
    bool hasUpper = false;
    bool hasLower = false; 
    bool invPass = false;
    
    if (strlen(cusPass) < sizeMin)
    minSize = true;

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

        if (minSize)  
            cout << "Please enter at least 6 characters" << endl;
        if (!hasDigit)
            cout << "Your password needs a number" << endl;
        if (!hasPunct)
            cout << "Your password needs a punctuation" << endl;
        if (!hasUpper)
            cout << "Your password needs an uppercase letter" << endl;
        if (!hasLower)
            cout << "Your password needs a lowercase letter" << endl;

        while (hasDigit == false || hasPunct == false || hasUpper == false || hasLower == false ||minSize == false)
         {
         cout << "Please reenter selection" << endl;
         cin.getline(cusPass, size);
         }
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



