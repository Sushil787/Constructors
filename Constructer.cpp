using namespace std;
#include <iostream>
class Human{
    public:
    int a;
    int b;
    Human(int x, int y){
        a = x;
        b = y;
    }
    void print(){
        cout<<"a is : "<<a<<endl;
        cout<<"b is : "<<b<<endl;

    }

    };
     int main(){
         Human H1(200,210);
         H1.print();
         return 0;
     }
