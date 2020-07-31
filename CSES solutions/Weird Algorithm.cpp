#include<bits/stdc++.h> 
using namespace std;
#define ll long long
#define rep(i,a,b) for(int i = a ; i<b; i++)
#define pb push_back

int main()
{

 ll n;
 cin>>n;
 cout<<n<<" ";
 while(n!=1)
 {
  if(n%2==0)
  {
    n = n/2;
    cout<<n<<" ";
  }
  else {
    n = (n*3)+1;
    cout<<n<<" ";
  }
 }
cout<<endl;

   

return 0;

}

