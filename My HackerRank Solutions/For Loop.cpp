
#include<bits/stdc++.h>
using namespace std;

int main() {

   int a;
   int b;
   string represent[10]= {"zero", "one", "two", "three","four", "five", "six","seven", "eight","nine"};
   

    cin>>a>>b;
     
     for(int i = a; i <=b; i++)
     {
         if(i>=1 && i<=9){
             cout<<represent[i]<<"\n";
         }
         else if(i%2==0)
         {
             cout<<"even"<<endl;
         }
         else{
             cout<<"odd"<<endl;
         }
     }
    
    
    return 0;
}
