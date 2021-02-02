#include <iostream>

using namespace std;

/*class test
{
private:
     int x=12;

public:
    friend class demo;
    };

class demo
{
    public:

    void m1(test t){
    cout<<t.x;
    }
    };

int main()
{
    test t2;
    demo t1;
    t1.m1(t2);

    return 0;
}
*/


void m(){
static int x=0;
cout<<x<<endl;
x++;}
int main(){
for(int i=0 ; i<=3 ; i++){
    m();}
    return 0;
}
