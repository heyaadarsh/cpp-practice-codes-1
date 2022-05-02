#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double h,p,b;
    cout<<"Enter Perpendicular Length: ";
    cin>>p;
    cout<<"Enter Base Length: ";
    cin>>b;
    /* Hyptenuse Calculation Code*/
    h = sqrt(pow(p,2)+pow(b,2));
    
    cout<< "The Hypotenuse is: "<<h;
    return 0;
}