
#include<bits/stdc++.h>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max [4] = {a,b,c,d};
    int maximum = max[0];
    for(int i = 1; i<4; i++){
       
         if(max[i]>maximum){
             maximum = max[i];
         }
 
    }
    return maximum;
}


int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
     cout<<max_of_four(a,b,c,d)<<endl;
     return 0;

}
