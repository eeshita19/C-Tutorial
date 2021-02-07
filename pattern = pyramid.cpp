#include<iostream>
using namespace std;

int main()

{
    int y;
    cout<<"enter the highest no. of stars needed";
    cin>>y;
  for(int row=0; row<=y ; row++){

        for(int col=y;col>=row ; col-- ){
            cout<<" ";
        }

        for(int col2=y+1 ; col2 <= row+y ; ){
                col2=col2+2;
            cout<<"*";

        }


    cout<<endl;
  }

    return 0;
}
