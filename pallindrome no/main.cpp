#include<iostream>
using namespace std;

int main()
{
    int x=0 ,n=0 , r=0, d =0;
    cout<<"enter input";
    cin >>n;

    x=n;

    while(n!=0){
        d=n%10;
        r=(r*10)+d;
        n =n/10;
    }
    cout<<r<<endl;
    if(x==r){
        cout<<"palindrome no.";
    }
    else{
        cout<<"not palindrome no.";
    }
    return 0;
}

