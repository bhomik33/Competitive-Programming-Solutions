#include<bits/stdc++.h>
#define ll long long



using namespace std;



int main()
{
	ios:: sync_with_stdio(0);
	cin.tie(0);

       string s;
     cin>>s;
    int count=1;
    int maximum = 0;
     for(int i = 0; i< s.size()-1; i++)
     { 
     	if(s[i]==s[i+1]){
     		++count;
       maximum = max(maximum, count);
     		
     	}
     	else{
     		count = 1;

     	}
     }
     if(maximum == 0)
     {
     	cout<<1<<endl;
     }
     else
cout<<maximum<<endl;
     



	return 0;
}
