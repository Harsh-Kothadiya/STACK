//stack using linked list

#include<iostream>
using namespace std;

struct LinkedList
{
    int data;
    struct LinkedList *link;
};

typedef struct LinkedList node;
node *top=NULL;

void PUSH(int v)
{
    node *IB;       // IB : inserting begining in linked list
    IB=new node;
    IB->data=v;
    IB->link=NULL;

    if(top == NULL )
    {
        top=IB;
    }
    else
    {
        IB->link=top;
        top=IB;
    }
    cout<<"\n\n PUSHED VALUE : "<<v;
}
int POP()
{
   if(top==NULL)
   {
       return (-1);
   }
   else
   {
       int val;    //DB : delete in begining in linked list
       node *DB;
       DB=top;
       top=DB->link;
       val=DB->data;
       delete DB;
       return val;
    }
}


void Display()
{
    if(top==NULL)
    {
        cout<<"\n\n STACK UNDER_FLOW...";
    }
    else
    {
        cout<<"\n\n DISPLAY VALUE \n\n";
        node *DP=top;
        while(1)
        {
            cout<<"\n\n"<<DP->data;

            if(DP->link==NULL)
                break;
            DP=DP->link;
        }
    }
}

int main()
{
    int choice;
    do
    {
        cout<<"\n\n----------------------\n\n";
        cout<<"\n\n\t 1. PUSH";
        cout<<"\n\n\t 2. POP ";
        cout<<"\n\n\t 3. DISPLA";
        cout<<"\n\n\t 4.EXIT ";

        cout<<"\n\n\t ENTER A CHOICE : ";
        cin>>choice;
        switch(choice)
        {
            case 1 :
                cout<<"\n\n\t ENTER A NUMBER : ";
                int val;
                cin>>val;
                PUSH(val);
                  break;

            case 2 :
                int fv;
                fv=POP();
                if(fv==-1)
                {
                    cout<<"\n\n STACK UNDER_FLOW...";
                }
                else
                {
                    cout<<"\n\n POPED VALUE : "<<fv;
                }
                  break;

            case 3 :
                Display();
                  break;

            case 4 :
                  break;

            default :
                cout<<"\n\n INVALIED CHOICE...";
        }

    }while(choice!=4);

    return 0;
}

