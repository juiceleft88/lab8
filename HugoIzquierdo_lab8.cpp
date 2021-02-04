//Hugo Izquierdo
//February 3rd, 2021
//This program will help the user create and check validity of a strong password 

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void sizeCheck(char[], int);
bool digitCheck(char[], int)

int main()
{
    const int SIZE = 9;
    char password[SIZE];
    int len;

    cout << "Please create a password which is at least: \n\n>Six characters long \n>Has no spaces \n>Contains at least one uppercase letter" <<
            "\n>One lowercase letter \n>One number \n>One special character (punctuation)" << endl;
    cin >> password;
    sizeCheck(password, SIZE);

    while(digitCheck(password, SIZE) == false)
    {
        cout << "You are missing a numerical value. please re-enter password: " <<endl;
        cin >> password;
    }
    

    




    return 0;
}

void sizeCheck(char custPass[], int size)
{
    int lengt = strlen(custPass) +1;
    while (lengt != size)
    {
        cout << "Your password is not following one of the above requirements. Please enter again: " << endl;
        cin >> custPass;
    }
}

bool digitCheck(char custPass[], int size)
{
    for (int count = 0; count < size; count++)
        if (!isdigit(custPass[count]))
        return false;
}

/*
void sizeCheck(char custPass[], int size)
{
    int sizeTst = 0;
    while (custPass[size] < sizeTst || custPass[size] > sizeTst)
    {
        cout << "Your password is not following one of the above requirements. Please enter again: " << endl; 
        cin >> custPass;    
    }
    cout << "Your password " << custPass << " meets character count requirement" << endl;
}

*/