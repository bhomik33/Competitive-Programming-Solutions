#include<bits/stdc++.h>
using namespace std;
int main()
{
      ios:: sync_with_stdio(0);
  cin.tie(0);
 
   int n;
    cin>>n;
    string s;
    int count = 0;
    cin>>s;
    for(int i = 0 ; i<n; i++)
    {
      if(s[i]== tolower(s[i]))
        continue;
      else
        s[i]= tolower(s[i]);
    }
    sort(s.begin(), s.end());
    for(int i = 0 ; i<n-1;i++)
    {
          if(s[i]!=s[i+1])
            ++count;
    }
    if(count == 25) 
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
    
    return 0;

}