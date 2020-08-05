#include<bits/stdc++.h>
#define ll long long



using namespace std;



int main()
{
  ios:: sync_with_stdio(0);
  cin.tie(0);
      int n;
    cin>>n;
    string l;
    int count = 0 ;
    for(int i = 0 ; i<n; i++)
    {
      cin>>l;
      if(l=="Tetrahedron")
        count += 4;
      else if(l=="Cube")
        count += 6;
      else if(l == "Octahedron")
        count += 8;
      else if(l == "Dodecahedron")
        count += 12;
      else 
        count += 20;
    }
 cout<<count<<endl;

  return 0;
}