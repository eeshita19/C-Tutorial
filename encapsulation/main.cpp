#include <iostream>

using namespace std;

class demo
{ int sum;
private:
    int a, b;

public:
    demo(int c , int d ){
        a=c;
        b=d;
    }
    int display(){
     sum = a + b ;
    return sum;}
};

int main()
{
    demo t = demo(3,4);
    int x = t.display();
    cout<<x;


    return 0;
}
