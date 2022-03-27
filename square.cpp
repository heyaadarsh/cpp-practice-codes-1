#include <iostream>
using namespace std;

class Square{

    public:int calPerimeter(int a){
        return 4*a;

    }
    public:int calArea(int a){
        return a*a;
    }

};
Square s;
int main(){
    int a;
    int option;
    cout<<"Please Choose an option 1 for perimeter and 2 for area:";
    cin>> option;
    cout<<"Enter the length of the side: ";
    cin>>a;
    if(option == 1){
        cout<<"Perimeter: "<<s.calPerimeter(a);
    }else if(option == 2){
        cout<<"Perimeter: "<<s.calArea(a);
    }else{
        cout<<"Please Select an Valid Option!!";
    }

    return 0;
}