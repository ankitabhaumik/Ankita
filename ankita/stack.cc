#include<iostream>
using namespace std;
#define MAX 100

class Stack
{
  public:
  int arr[MAX];
  int top;
 
  Stack()
  {
    top = -1; 
  }
  
  int push(int data)
  {
     if(top == MAX)
      {
        cout<<"stack is full";
        return 0;
      }
     else
      {
       arr[++top]=data;
       return 1;
      }
  }

  int pop()
  {
     if(top == -1)
      {
       cout<<"Stack is empty";
       return 0;
      }
    else
     { 
       int x=arr[top];
       top--;
       return x;
     }
  }

 int print()
  {
     int i=0;
     while(i<=top)
     {
       cout<<arr[i]<<"\t";
       i++;
     }
   cout<<endl;
  }
    	
};



int main()
{
   Stack s;
   s.push(20);
   s.push(10);
   s.push(67);
   s.push(34);
   s.print();
   int a = s.pop();
   cout<<"a = "<<a<<endl;
   s.print();
}
