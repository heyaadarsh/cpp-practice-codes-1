#include <iostream>
using namespace std;

struct brand{
    int bId;
    string name;
    int networth;

};

int main(){
    brand b1;
    b1.bId=1;
    b1.name="Google";
    b1.networth=10000000;
    cout<<b1.name<<endl;
    cout<<b1.networth<<endl;
    cout<<b1.bId;
    
    
    return 0;
}