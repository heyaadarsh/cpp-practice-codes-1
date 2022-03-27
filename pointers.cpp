#include <iostream>
using namespace std;
int main(){
   //Pointer declaration
   int *a, b=5;
 
   //Assignment
   a = &b;

   cout<<"Address of b: "<<&b<<endl;
   cout<<"Address of b: "<<a<<endl;
   cout<<"Address of a: "<<&a<<endl;
   cout<<"Value of b: "<<*a;
   return 0;
}