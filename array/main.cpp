#include <iostream>
using namespace std;
void m1(int x[]){
   for(int i=0 ; i<5 ; i++){

   cout<<x[i]<<endl;
   }
}

int main()
{
      int a[6]={0,1,2,3,4,8};
      m1(a);
      return 0;

}
