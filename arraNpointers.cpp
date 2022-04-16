#include <iostream>
using namespace std;

int main(){
    int arr[] = {0,1,2,3,4,5,6};
    int* p = arr;
    int* secondElement = p+2;
    int* thirdElement = p+3;
    cout<<*p<<endl<<*secondElement<<endl<<*thirdElement;

    return 0;
}