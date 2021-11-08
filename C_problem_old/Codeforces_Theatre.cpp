#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,a;
    cin >> n >> m >> a;
  if(n!=0 && a!=0)
  {
    cout <<((n + a - 1) / a) * ((m + a - 1) / a) << endl;
  }
}
