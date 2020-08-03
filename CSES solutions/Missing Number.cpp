#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	ios:: sync_with_stdio(0);
	cin.tie(0);
     int n ;
    cin>>n;
    int k[n -1];
    const int mxn = 200001;
    int f[mxn] = {0};  // frequency array 
    int mis;
    for(int i = 1 ; i<n; i++)
    {
    	cin>>k[i];
    	++f[k[i]];   // storing elements in frequency array
    } 
    
 for(int i = 1; i<mxn;i++)
 {
     if(f[i]==0){
     	mis = i;
     	break;
     }
 }
cout<<mis<<endl;

    return 0;
}
