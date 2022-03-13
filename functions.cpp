#include <iostream>
using namespace std;
int n;
void calFactorial(int n){
    int fact= 1;
    for (int i = 1; i < n; i++)
    {
        fact = fact*i;
    }
    cout<<"Factorial of given number is:"<<fact;
    

}
int main(){

cout<<"Enter the Number";
cin>>n;
calFactorial(n);
return 0;

}
