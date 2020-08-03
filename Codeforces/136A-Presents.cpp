#include<bits/stdc++.h>
#define ll long long



using namespace std;



int main()
{
	ios:: sync_with_stdio(0);
	cin.tie(0);

    int n;
    cin>>n;
    int k;
    int l[n];
    for(int i = 1 ; i<=n; i++)
    {
    	cin>>k;
    	l[k] = i;
    }
  for(int i = 1 ; i<=n; i++)
  {
        cout<<l[i]<<" ";
  }
  cout<<endl;
	return 0;
}
