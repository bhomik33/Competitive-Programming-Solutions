#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

     int a;
      cin>>a;
      int ar[a];
      for(int i =0 ; i<a; i++)
      {
           cin>>ar[i];
      }
      for(int s = a-1 ; s>=0; s--)
      {
          cout<<ar[s]<<" ";
      }
    return 0;
}
