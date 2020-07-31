#include<bits/stdc++.h>
using namespace std;

int main() {

    string r,l;
     cin>>r>>l;

    string sum = r+l;
    cout<<r.size()<<" "<<l.size()<<endl;
    cout<<sum<<"\n";
    swap(r[0],l[0]);
 
    cout<<r<<" ";
    cout<<l<<endl;
  
    return 0;
}
