#include "header.h"

int main() 
{
    int num = 0;
    cout << "Please enter a number: \n"; 
    cin >> num;

    if (num % 2 == 0)
        cout << "The value " << num << " is an even number.\n";
    else
        cout << "The value " << num << " is an odd number.\n";    
    return 0;
}

