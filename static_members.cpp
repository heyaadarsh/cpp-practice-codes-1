#include <iostream>
using namespace std;
 class Counter{
    public: static int count;

    public:
            void set(){
                count=0;
            }
            void inc(){
                count++;
            }
            const void display(){
                cout<<count;
            }
};

int main(){
    Counter c1,c2;
    c1.set();
    c1.inc();
    c2.display();
    
    return 0;
}