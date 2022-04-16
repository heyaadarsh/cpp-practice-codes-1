#include <iostream>
using namespace std;

int main(){
    // unoions allow you to store only one value at a time
    union Currency
    {
        int dollars;
        int rupees;
        float pounds;
    };
    Currency c1;
    c1.dollars=10;
    cout<<"Dollars: "<<c1.dollars<<endl;
    c1.rupees=100;
    cout<<"Dollars: "<<c1.dollars<<endl; // the value of rupees is assigned to dollar also
    cout<<"Rupees: "<<c1.rupees<<endl;

    // 
    enum Food {Breakfast,Lunch,Dinner};
    Food f1 = Dinner;
    cout<<f1;
    
    return 0;
}