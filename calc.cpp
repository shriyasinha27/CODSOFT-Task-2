#include<iostream>
using namespace std;
int main()
{
    int op1, op2;
    char sign;

    cout << "Enter the first number :"  ;
    cin >> op1 ;

    cout << "Enter the second number :" ;
    cin >> op2 ;

    cout << "Choose one of the operations : +, -, *, / : " ;
    cin >> sign ;

    switch(sign) {

        case '+' :
        cout << " Performing addition operation : " << op1 << " + " << op2 <<" = " << op1 + op2;
        break;

        case '-' :
        cout << " Performing subtraction operation : " << op1 << " - " << op2 << " = " << op1 - op2 ;
        break; 

        case '*' :
        cout <<" Performing multiplication operation : " << op1 << " * " << op2 << " = " << op1 * op2 ;
        break;

        case '/' :
        cout << " Performing division operation : " << op1 << " / " << op2 << " / " << op1 / op2 ;
        break;

        default:
         cout<< "The operator is not correct" ;
         break;
            }

    return 0;
}   