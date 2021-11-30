// Including the header file
#include "header.h"

int main() 
{
    int num = 0;

    // Asking for user input
    cout << "Please enter a number: \n"; 
    cin >> num;

    // Output
    if (num % 2 == 0)
        cout << "The value " << num << " is an even number.\n";
    else
        cout << "The value " << num << " is an odd number.\n";    
    return 0;
}

