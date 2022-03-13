#include <iostream>
using namespace std;
int main(){
   int i = 0;
   cout<<"Table of 6:"<<endl;
   while (i<60)
   {
      i+=6;
      cout<<i<<endl;
   }

   cout<<"Second Approach"<<endl;

   for (int i = 1; i <= 60; i++)
   {
      /* code */
      if (i%6==0)
      {
         cout<<i<<endl;
      }
      
   }
   
   

   return 0;
}