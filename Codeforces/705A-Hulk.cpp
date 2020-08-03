#include<bits/stdc++.h>
#define ll long long



using namespace std;



int main()
{
	ios:: sync_with_stdio(0);
	cin.tie(0);

  int n;
  cin>>n;
  string s1 = "I hate it";
  
  if(n ==1)
  {
  	cout<<s1<<endl;
  }
  else {
  	for(int i = 1; i<=n;i++)
  	{
  		if(i%2!=0 || i==1){
  			cout<<"I hate ";
  		}
  		else {
  			cout<<"I love ";
  		}
  		if(i<n)
  		{
  			cout<<"that ";
  		}
  		else {
  			cout<<"it ";
  		}
  		
  	}
  }
  cout<<endl;
	return 0;
}
