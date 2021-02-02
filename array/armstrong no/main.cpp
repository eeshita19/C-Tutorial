#include <iostream>

using namespace std;

int main()
{
    int x,z,y,u,v,t;
    cout << "enter the no.";
    cin>>x;

    y=x%10;
    z=x/10;
    u=z%10;
    v=z/10;

    if(x != 0){
        t=v*v*v + u*u*u + y*y*y;
        if(x==t){
            cout<<"armstrong no."<<x;
        }
        else{
            cout<<"not armstrong no."<<x;
        }
    }
    return 0;
}






