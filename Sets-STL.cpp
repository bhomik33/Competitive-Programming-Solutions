#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;  

    set<int>s;
     long long type, value;
    set<int>:: iterator it ;
    for(int i = 0 ; i<n; i++)
    {
        cin>>type>>value;
        if(type == 1)
        {
            s.insert(value);
        }
        else if(type == 2)
        {
            s.erase(value);
            
        }
        else{
            it = s.find(value);
            if(it!= s.end()) cout<<"Yes"<<"\n";
            else  cout<<"No"<<endl;
        }
    }
    return 0;
}



