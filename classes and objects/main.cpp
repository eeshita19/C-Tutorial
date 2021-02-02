#include <iostream>

using namespace std;
class demo
{
  public:
    int id;
    string name;

    demo(int i,string s){

    id=i;
    name=s;
    }

    void display(){
    cout<<"your id is :"<<id<<endl<<"your name is :"<<name<<endl;
    }


};
int main()
{
    demo t =demo(101,"Amit") ;
    t.display();
    demo t1 =demo(102,"Deepak");
    t1.display();
    return 0;

}
