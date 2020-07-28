//stack using array
#include<iostream>
#define SIZE 4
using namespace std;

class STACK
{
  private :
      int top=-1;
      int Array[SIZE];
  public :
    void PUSH(int);
    int POP();
    void DISPLAY();
    void PEEP();
    void CHANGE();
};

int main()
{
    STACK s,*p;
    p=&s;

    int choice;
    do
    {
        cout<<"\n\n------------------------------------\n\n";
        cout<<"\n\n\t ENTER-1 : PUSH";
        cout<<"\n\n\t ENTER-2 : POP";
        cout<<"\n\n\t ENTER-3 : PEEP";
        cout<<"\n\n\t ENTER-4 : CHANGE";
        cout<<"\n\n\t ENTER-5 : DISPLAY";
        cout<<"\n\n\t ENTER-6 : EXIT";

        cout<<"\n\n\t ENTER YOUR CHOICE : ";
        cin>>choice;


        switch(choice)
        {
            case 1 :
                int value;
                cout<<"\n\n\t ENTER A VALUE : ";
                cin>>value;
                p->PUSH(value);
                 break;


            case 2 :
                int fv;
                fv=p->POP();
                if(fv==-1)
                {
                    cout<<"\n\n UNDER_FLOW...";
                }
                else
                {
                   cout<<fv;
                }
                 break;


            case 3 :
                  p->PEEP();
                 break;


            case 4 :
                p->CHANGE();
                 break;


            case 5 :
                cout<<"\n\n DISPLAY VALUE \n";
                p->DISPLAY();
                 break;

            case 6 :
                break;

            default :
                cout<<"\n\n IN_VALIED CHOICE...";
                 break;
        }

    }while(choice!=6);

    return 0;
}

void STACK :: PUSH(int v)
{
    if(top==SIZE-1)
    {
        cout<<"\n\n OVERFLOW...\n\n";
    }
    else
    {
       top=top+1;
       Array[top]=v;
       cout<<"\n\n INDEX : "<<top<<" , PUSHED VALUE IS : "<<Array[top];
    }
}

int STACK :: POP()
{
    int v;
    if(top==-1)
    {
        return (-1);
    }
    else
    {
        v=Array[top];
        cout<<"\n\n INDEX : "<<top<<" , POPED VALUE IS : ";
        top=top-1;
        return v;
    }
}

void STACK :: PEEP()
{
   if(top==-1)
   {
       cout<<"\n\n UNDER_FLOW...";
   }
   else
   {
       int p=0;
       cout<<"\n\n  AVAILABLE INDEX IS \n\n ";
       while(1)
       {
           cout<<p;
             if(top==p)
                break;
             cout<<" OR ";
             p=p+1;
       }
       cout<<"\n\n\t NOW ENTER AN INDEX AND FIND A PEEP VALUE :  ";
       int p1;
       cin>>p1;
       cout<<"\n\n FIND PEEP VALUE  IS :  "<<Array[p1];
   }
}

void STACK :: CHANGE()
{
    if(top==-1)
        cout<<"\n\n UNDERFLOW...";
    else
    {
    	int p=0;
    	cout<<"\n\n\ AVAILABLE INDEX IS \n\n ";
    	while(1)
    	{
    		cout<<p;
    		if(top==p)
    			break;
    		p=p+1;
    		cout<<" OR ";

		}
		cout<<"\n\n\t NOW ENTER A INDEX  :  ";
		int p1;
		cin>>p1;
		cout<<"\n\n\t ENTER A NEW VALUE  : ";
		int val;
		cin>>val;
		cout<<"\n\n INDEX : "<<p1<<" VALUE IS CHANGED";
       Array[p1]=val;
    }
}


void STACK :: DISPLAY()
{
    if(top==-1)
    {
        cout<<"\n\n UNDER_FLOW...\n\n";
    }
    else
    {
        int i;
        for(i=0;i<=top;i++)
        {
            cout<<"\n\n INDEX : "<<i<<", VALUE IS : "<<Array[i];
        }
    }
}
