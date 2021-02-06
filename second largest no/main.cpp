#include <iostream>

using namespace std;

int main()
{
    int T=0 , x=0;
    cout<<"enter the no. of elements"<<endl;
    cin>>T;
    int numbers[T];
    while(x<T){
        cout<<"enter the no. at position :"<<x<<endl;
        cin>>numbers[T];
        x++;
    }
    x=0;
    int  y=numbers[0], m=0;
    while( x< T){
       m=max(numbers[x],numbers[x+1]);
            if(m>y){
            y=m;

                 }
    x++;
    }

    x=0;
    int numbers2[T-1];

    for(x=0 ; x<T-1; x++){
        if(numbers[x]!=y){
            numbers2[x]=numbers[x];
        }
        else{
            numbers2[x]=0;
        }

    }


x=0 , m=numbers2[0];
        int z =0, ;
    while(x<T-1){
             z=max(numbers2[x],numbers2[x+1]);
             if(z>m){
                m=z;
             }
    x++;

    }

    cout<<m;




    return 0;
}
