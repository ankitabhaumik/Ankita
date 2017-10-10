#include<iostream>
using namespace std;

int function(int *x,int *y)
{
   int *s;
   s=x;
   x=y;
   y=s;
   cout<<x<<y;
}

int main()
{
  int a,b;
  cin>>a>>b;
  function(&a,&b);
  cout<<a<<b;
}

