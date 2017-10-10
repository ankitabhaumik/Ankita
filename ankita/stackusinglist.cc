#include<iostream>
#include<string.h>
using namespace std;

struct node
{  
   int data;
   struct node *next;
};

node* push(int data,struct node* head)
{  
   struct node* p=new node;
   struct node* curr=head;
   p->data=data;
   if(head==NULL)
    { 
      p->next=NULL;
      head=p;
      return head;
    }
   else
    { 
      while(curr->next!=NULL)
      { 
        curr=curr->next;
      }
    curr->next=p;
    p->next=NULL;
 
}
}


node* pop(struct node *head)
{  
  struct node *current=head;
  struct node *prev=head;
   
   if(head==NULL)
   {
     cout<<"Queue is empty"<<endl;
   }
  else
   {
     while(current->next!=NULL)
     {
       prev=current;
       current=current->next;
     }
    prev->next=NULL;
    delete current;
    current=NULL;
}
}

void print(node *head)
{
   struct node* top=head;
   if(head==NULL)
   {
     cout<<"Queue is empty"<<endl;
   }
  else
   {
     while(top->next!=NULL)
     {
       cout<<top->data<<"\t";
       top=top->next;
     }
   cout<<top->data<<"\t";
   cout<<endl;
   }
}



int main()
{
  struct node* head= NULL;
  head = push(10,head);
  push(20,head);
  push(30,head);
  push(40,head);
  push(50,head);
  print(head);
  pop(head);
  print(head);
}
