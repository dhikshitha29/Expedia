//#include"customerderived.h"
#include"userderived.h"
#include<iostream>
#include<stdlib.h>
//int room[50];
using namespace std;
int main()
{
    int ch;
    int t=1;
    char op;
    User u;
    cout<<endl;
    cout<<"***********************************************************WELCOME****************************************************";
    cout<<endl;
    cout<<"\n\t\t\t--------------------------------------------------------------------------";
    //cout<<"\n";
//    cout<<"\n\t\t\t||***********************HOTEL MANAGEMENT SYSTEM************************||";
//    cout<<"\n\t\t\t||----------------------------------------------------------------------||";
//    cout<<endl<<"\t\t\t||\t\t\t\t\t\t\t\t\t||";
//    cout<<endl;
    do
    {
        cout<<"\n\t\t\t||***********************HOTEL MANAGEMENT SYSTEM************************||";
        cout<<"\n\t\t\t||----------------------------------------------------------------------||";
        cout<<endl<<"\t\t\t||\t\t\t\t\t\t\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t||\t\t\t  1.RECEPTIONIST\t\t\t\t||";
        cout<<endl<<"\t\t\t||\t\t\t\t\t\t\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t||\t\t\t  2.MANAGER\t\t\t\t\t||";
        cout<<endl<<"\t\t\t||\t\t\t\t\t\t\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t||\t\t\t  3.EXIT\t\t\t\t\t||";
        cout<<endl<<"\t\t\t||\t\t\t\t\t\t\t\t\t||";
        cout<<endl<<"\t\t\t||\t\t\t\t\t\t\t\t\t||";
        cout<<"\n\t\t\t**************************************************************************";
        cout<<endl;
        cout<<endl;
        cout<<"\t\t\t\t\tEnter the choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:Receptionist r;
                    r.login();
                    t=0;
                    cout<<"\nDo you want to go to user menu?(y/n)";
                    cin>>op;
                    system("cls");
                    break;
            case 2:Manager m;
                    m.login();
                    t=0;
                    //op='\0';
                    cout<<"\nDo you want to go to user menu ?(y/n)";
                    cin>>op;
                    system("cls");
                    break;
            case 3:u.exit();
                    t=0;
                    op='n';
                    break;
            default:cout<<"\n Enter only valid choice";
                    cin>>ch;
                    t=1;
                    break;
        }

    }while(op=='y'||op=='Y');
    //u.exit();
}

