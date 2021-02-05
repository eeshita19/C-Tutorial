#include <iostream>

using namespace std;

int sum(int a, int b){
    int x= a+b;


    return x ;
}

void difference(int a , int b){
   int x = a -b ;
   cout<<x<<endl;
}
void multiply(int a , int b){
   int x = a * b ;
   cout<<x<<endl;
}

void divide(int a , int b){
   int x = a /b ;
   cout<<x<<endl;
}


int main()
{
   char y;
   int a, b, c,d;
   cout<<"enter operator from ( + , - , * , v , / )";
   cin>>y;
   cout<<"enter the values a and b";
   cin>>a>>b;

   c=sum(a,b);

   switch(y){
case 'v' :
    {
       d = c/2;
       cout<<d;
       break;
    }
case '+' :
    {
        c;
        break;
    }
case '-' :
    {
        difference(a,b);
        break;

    }
case '*' :
    {
        multiply(a,b);
        break;
    }
case '/' :
    {
        divide(a,b);
        break;
    }
default :
    {
        cout<<"enter valid operator";
    }
   }
   return 0;
}
