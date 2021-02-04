//Hugo Izquierdo
//February 3rd, 2021
//This program will help the user create and check validity of a strong password 

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void sizeCheck(char[], int);
bool digitCheck(char[], int);

int main()
{
    const int letter_SIZE = 7;
    char password[SIZE];
  

    cout << "Please create a password which is at least: \n\n>Six characters long \n>Has no spaces \n>Contains at least one uppercase letter" <<
            "\n>One lowercase letter \n>One number \n>One special character (punctuation)" << endl;
    cin.getline(password, SIZE);
    cout << password <<endl;
    cout << strlen(password);
    cout << sizeof(password) << endl;
    cout << strlen(password) +1;
    int len = strlen(password)+1;
    cout << len;
    while (strlen(password) <= (SIZE-1) && strlen(password) != '\0')
        {
            cout << "Try again";
            cin >> password;
        }
    
    //sizeCheck(password, SIZE);
    





    return 0;
}

/*void checkPunct()
{
    bool okSize = false;
    cin.getline(password, SIZE);
    for (int i=0; i < strlen(password); i++)
    {
        if (password[i] )
    }

}

/*
bool digitCheck(char cusPass[], int siz)
{
    return false;
    for (int count = 0; count < siz; count++)
    {
        if (isdigit(cusPass[count]))
        return true;
    }
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