#include <iostream>

using namespace std;
class student{
public:


    void m1 (){
    cout<<"class student method m1 "<<  endl;
    }
    };

class Demo :public student {


public:
    void m2(){
         cout<<"class Demo method m2"<<  endl;
    }


}    ;

int main()
{
    Demo d;
    d.m2();
    d.m1();

    return 0;
}
