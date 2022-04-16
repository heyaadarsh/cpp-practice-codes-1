#include <iostream>
using namespace std;
 int num1,num2;
 char op;

int main(){
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter the operator: ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<"The result is: "<<num1+num2;
        break;
    case '-':
        cout<<"The result is: "<<num1-num2;
        break;
    case '*':
        cout<<"The result is: "<<num1*num2;
        break;
    case '/':
        cout<<"The result is: "<<num1/num2;
        break;
    
    default:
        break;
    }
    return 0;
}