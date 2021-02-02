//includes polymorphism and multi inheritance

#include <iostream>
using namespace std;

class b
{
    public:
        void m1(string a , int b){
        cout<<"string is "<<a << " and int "<< b<< endl;
        }

    void m1(int a,int b){
        int sum= a+b;
        cout<<sum<< endl;
    }
};
class c
{
public:

    void m1(int a,int b){
        int difference= a-b;
        cout<<difference<< endl;
    }

};

class d : public b , public c{
    public:

};

class constructor{
public:
    int id;
    char z;
    constructor(int i , char s){
     id=i;
    z=s;}
    constructor(char s , int i){
    id=i;
    z=s;}

    void display(){
    cout<<"int and char "<<id <<"and"<<z <<endl;}
    };

int main()
{
    b object1;
    object1.m1("xyz",3);
    d object;
    object.b::m1(9,8);
    object.b::m1("string",3);
   // polymorphism in constructors
    constructor type=constructor(3,'s');
    constructor type2=constructor('s',3);
    type2.display();

    type.display();
    return 0;
}
