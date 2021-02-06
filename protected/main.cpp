#include <iostream>

using namespace std;
class demo{
public:
    int x=10;

private:
    int y=20;


protected:

    int z=30;



    };

class Test: public demo{

public:
    void m1(){
    cout<<x<<endl<<z;

    }


}    ;







int main()
{

    Test t;
    t.m1();


    return 0;
}
