#include <iostream>

using namespace std;
class demo{
public:
     virtual void m1()=0;
     void m2(){
     cout<<"void m2"<<endl;
     }
     };

 class example : public demo{
 public:
     void m1(){
     cout<<"example class"<<endl;
     }
     }    ;

int main()
{
    example t ;
    t.m1();
    t.m2();

    //object of abstraction class cant be made

        return 0;
}
