#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<< "Enter the numbers seperated by spaces: ";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Swaped Numbers are:"<<endl<<a<<" "<<b;
    return 0;
}