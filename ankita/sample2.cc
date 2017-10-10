#include<iostream>
using namespace std;
int x=56;
class test
{
  int x;
  
  public:
  void setX(int x)
   {
   //    x=5;
       this->x=x;
   }
  
    void print()
     { 
       cout<<x<<endl;
     }
};
int main()
{
   test t;
   int x=10;
   t.setX(x);
   x=12;
   t.setX(x); 
   t.print();
}
