#include<bits/stdc++.h>
using namespace std;
int main()
{
      ios:: sync_with_stdio(0);
     cin.tie(0);
    int count = 0 ; 
    string s1,s2;
    cin>>s1>>s2;
    string s;
    cin>>s;
    string s3 = s1 + s2;
    sort(s3.begin(),s3.end());
    sort(s.begin(),s.end());
    if(s.size() == s3.size())
    {
    for(int i = 0; i<s3.size(); i++)
    {
      if(s3[i]==s[i]){
          ++count;
        continue;
      }
      else {
        cout<<"NO"<<endl;
        break;
      }
    }
    
    }
    else
      cout<<"NO"<<endl;
      if(count == s3.size())
      {
          cout<<"YES"<<endl;
      }
    
    return 0;

}