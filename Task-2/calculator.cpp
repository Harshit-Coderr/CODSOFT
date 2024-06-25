#include <iostream>
using namespace std;

int main()
{
    float num0, num1;

    char ap;
    cout << "\n\nENTER YOUR ARITHMETICO PERATIONS \n\n Enter a for Addition\n Enter S for Subtraction\n Enter d for division\n Enter m for multiplication \n\n>> ";
    cin >> ap;
    cout << "Enter first Number = ";
    cin >> num0;
    cout << "Enter second Number = ";
    cin >> num1;
    cout<<"\n";
    switch (ap)
    
    {
    case 'a':
        cout << ">> " <<num0<<"  +  "<<num1<<"  =  "<< num0 + num1;
        break;

    case 's':
        cout << ">> " <<num0<<"  -  "<<num1<<"  =  " << num0 - num1;
        break;

    case 'd':
        cout << ">> " <<num0<<"  /  "<<num1<<"  =  " << num0 / num1;
        break;

    case 'm':
        cout << ">> " <<num0<<"  *  "<<num1<<"  =  " << num0 * num1;
        break;
    default:
        cout << "wrong input";
        break;
    }
cout<<"\n\n\n\n\n\n";
    return 0;
}
