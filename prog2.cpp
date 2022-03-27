#include <iostream>
using namespace std;

int calculatesub(int a, int b){
    return a-b;
}
int main(){
    int a,b;
    cout<<"Enter the numbers seperated by spaces:"<<endl;
    cin>>a>>b;
    cout<<"The sum of the give numbers are:"<<calculatesub(a,b);
    return 0;
}