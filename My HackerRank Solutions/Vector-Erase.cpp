#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int x;
    int y,z;
    cin>>n;
    vector<int>v;
    for(int i = 0 ; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    } 
    cin>>x>>y>>z;
    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(y-1),v.begin()+(z-1));
    cout<<v.size()<<endl;
    for(int  i = 0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
