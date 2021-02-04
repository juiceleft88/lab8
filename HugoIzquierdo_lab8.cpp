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

    if(strlen(password) > MIN_SIZE)  
        comparingPass(password, passwordV);


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
    bool passTest = false; 
    
    for (int count = 0; count < strlen(cusPass); count++)
    {
        if (isdigit(cusPass[count]))
        hasDigit = true;
        
        if (ispunct(cusPass[count]))
        hasPunct = true;

        if (isupper(cusPass[count]))
        hasUpper = true;

        if (islower(cusPass[count]))
        hasLower = true;

        if (!hasLower && !hasUpper && !hasPunct && !hasDigit)
        passTest = true;
    }
        while (passTest == false)
    {
        cout << "Please check your input again" << endl;
        cin.ignore();
        cin.getline(cusPass, size);
    }
    
    }
    
        
    //if (!hasDigit && !hasPunct && !hasUpper && !hasLower)
        //cout << "Check the guidelines again" << endl;
        
    

void comparingPass(char cusPass[], char verPass[])
{
    if (strcmp(cusPass, verPass) == 0)
        cout << "The passwords match. Thank you!";
    else
        cout << "The passwords do not match, please try again.";
}

void passesTest()
{
    //digitCheck();
}

//void casing(char cusPass[], int size)
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



