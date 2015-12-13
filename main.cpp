// Lab 1 Part I
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int number1,number2;
    
    cout << "Enter two integers: ";
   
    cin>>number1>>number2;

    if (number1%number2==0){
        cout << number1 << " is a multiple of " << number2 << endl;
    }
    if (number1%number2!=0){
        cout << number1 << " is not a multiple of " << number2 << endl;
    }

    return 0;
    
}
