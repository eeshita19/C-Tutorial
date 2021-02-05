#include <iostream>

using namespace std;
class demo{
private:
    int id;
    string name;
public:
    demo(int i , string s)
    {
        id=i;
        name=s;
    }

    int setid(int id)
    {
        this->id=id;
    }

     int getid()
    {return id;
    }
  string getname()
  {

      return name;
  }
    };
int main()
{
    demo t = demo(4,"user");
    int x =t.getid();
    string y = t.getname();
    cout<<"id is "<<x<<endl<< "name is "<<y<<endl;

    demo t2 =demo(6, "name");
    t2.setid(7);
    int r =t2.getid();
    cout<<"id is "<<r;
    return 0;
}
