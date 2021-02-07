#include <iostream>

using namespace std;

struct emp{
int id;
string name;
};

emp input(){
emp e1;
cin>>e1.id;
cin>>e1.name;


return e1;
}

void display(emp e){
cout<<e.id<<endl;
cout<<e.name<<endl;
}

int main()
{
  emp a;
    a=input();
    display(a);
  /*e1.id=101;
  e2.name="b";
  emp e3;
  e3.id=103;
   cout<<e1.id<<endl<<e2.name<<endl<<e3.id;
   */
    return 0;
}
