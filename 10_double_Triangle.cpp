#include<bits/stdc++.h>
using namespace std;

int main()
{
  int test_case;
  cin>>test_case;
  
  while(test_case--)
  {
     int n;
     cin>>n;

     for(int i=1; i<=n; i++)
     {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
     }
     for(int i=n-1; i>0; i--)
     {
        for(int j=1; j<=i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
     }

  }

return 0;
}