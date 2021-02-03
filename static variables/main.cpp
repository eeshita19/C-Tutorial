#include <iostream>

using namespace std;
/*
class collage{
public:
    int id;
    string name;

        static string col;

static void m1(){
cout<<"static function";
}
collage( int id, string name){
this->id=id;
this->name=name;
};
void display(){
   cout<<id << " "<< name<<" "<< col<<endl;
   }
          };

       string   collage::col="bvp";
int main()
{
    collage student1 = collage(101,"a");
   student1.display();

   collage student2 = collage(102 , "b");
   student2.display();

    collage::m1();
    return 0;
}
*/

namespace first
    {
        void m1(){
        cout<<"first";
        }
    }
namespace second
        {

            void m1(){
            cout<<"second";
            }
        }
using namespace first;
int main(){
m1();
return 0;}


