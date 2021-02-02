#include <iostream>

using namespace std;
class a{
public :
    void m1(){
    cout<< "hello world"<<endl;
    }
    };
class b: public a {
public:
    void m1(){
    cout<<"class b";
        }
    }    ;

int main()
{
    a obj;
    obj.m1();
     b object;
     object.m1();
    return 0;
}
