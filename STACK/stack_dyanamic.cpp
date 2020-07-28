#include<iostream>
using namespace std;

int main()
{
    int s;
    cout<<"\n\n\t ENTER A SIZE OF ARRAY : ";
    cin>>s;

    int *Array;
    Array = new int[s];

    int top=-1;

    int choice;
    while(1)
    {
        cout<<"\n\n--------------------------------------\n\n";
        cout<<"\n\n\t ENTER-1 : PUSH";
        cout<<"\n\n\t ENTER-2 : POP";
        cout<<"\n\n\t ENTER-3 : DISPLAY";
        cout<<"\n\n\t ENTER-4 : EXIT";
        cout<<"\n\n\t ENTER YOUR CHOICE : ";
        cin>>choice;

        switch(choice)
        {
            case 1 :
                cout<<"\n\n\t ENTER A VALUE : ";
                int value;
                cin>>value;
                if(top==s-1)
                {
                    cout<<"\n\n OVER_FLOW...";
                }
                else
                {
                    top++;
                    Array[top]=value;
                    cout<<"\n\n PUSHED VALUE : "<<value<<", INDEX : "<<top;
                }

                break;
            case 2 :
                if(top==-1)
                {
                    cout<<"\n\n UNDER_FLOW...";
                }
                else
                {
                    int fv,ft;
                    fv=Array[top];
                    ft=top;
                    top=top-1;
                    cout<<"\n\n POPED VALUE : "<<fv<<",INDEX : "<<ft;
                }
                break;
            case 3 :
                if(top==-1)
                {
                    cout<<"\n\n UNDER_FLOW...";
                }
                else
                {
                    int i;
                    cout<<"\n\n DISPLAY VALUE \n\n";

                    for(i=0;i<=top;i++)
                    {
                        cout<<"\nINDEX : "<<i<<", VALUE : "<<Array[i]<<endl;
                    }
                }

                break;
            case 4 :
                break;
            default :
                cout<<"\n\n IN_VALIED CHOICE...";
                break;
        }
        if(choice==4)
            break;
    }
    return 0;
}
