#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head,*temp,*newnode;

void delete_end()
{
   if(head!=NULL)
   {node *current= head,*prev=head;
    while(current->next!=NULL)
    {
        prev=current;
        current=current->next;
    }
    prev->next=NULL;
    if(head->next==NULL)
    {
       head=NULL;
    }
    delete current;
   }
   else
    cout<<"underflow"<<endl;

   return;
}
void insertVal(int i)
{
     newnode =new node;
        newnode->data=i;
        newnode->next=NULL;
    if(head!=NULL)
    {
         temp->next=newnode;
         temp=temp->next;

    }
    else
    {
        head=temp=newnode;
    }
return;
}
void traverse()
{
if(head!=NULL)
{

    temp=head;
    while(temp!=NULL)
    {

        cout<<"data : "<<temp->data<<endl;
        temp=temp->next;
    }

    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
}
else
{
    cout<<"no value to traverse"<<endl;
}

    return;
}
int main()
{
    int i=1,input;
    int choice;
    while(i==1)
    {
        cout<<"press \n1 to insert node \n2 to traverse \n3 to delete from end"<<endl;
        cin>>choice;
        if(choice<=3&&choice>0)
        {switch(choice)
        {
        case 1:
           {

            cout<<"enter the value of node to be inserted "<<endl ;
            cin>>input;
            insertVal(input);
           } break;
        case 2:
            {traverse();
            }break;
        case 3:
            {delete_end();}

        }
        }
        else
        {
            cout<<"enter valid choice "<<endl;
        }
        cout<<"press 1 to continue or else exit by pressing any number "<<endl;
        cin>>i;
        cout<<endl;
    }

}
