
#include"userderived.h"
#include<iostream>
#include"customer.h"
//#include"customerderived.h"
//#include"customer_derived1.h"
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
using namespace std;
int n=100;
void Receptionist::login()
{
    int t=1;
    char a;
    system("cls");
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------";
    cout<<"**************************************************RECEPTIONIST DETAILS**************************************************";
    cout<<"\n------------------------------------------------------------------------------------------------------------------------";
    cout<<endl;
    cout<<endl;
    int s=0;
    do
    {
        cout<<endl;
        cout<<"Enter your name :";
        cin>>name;
        s=0;
        for(int i=0;i<20;i++)
        {
            if(isdigit(name[i])==1)
            {
                cout<<"\nSorry!!Invalid Name";
                cout<<"\nEnter only characters ";
                /*cout<<"\n Enter your name:";
                cin>>name;*/
                s=1;
                break;
            }
        }
    }while(s==1);
    cout<<endl;
    cout<<"Enter id :";
    cin>>id;
    cout<<endl;
//    cout<<"Enter the login details";
//    cout<<endl;
    system("cls");
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------";
    cout<<"**************************************************LOGIN  DETAILS******************************************************";
    cout<<"\n------------------------------------------------------------------------------------------------------------------------";
    cout<<endl;
    cout<<"\t\t\t\tENTER THE LOGIN DETAILS:";
    cout<<endl;
    do
    {
        cout<<endl;
        cout<<"\t\t\t\tUSERNAME :";
        cin>>username;
        cout<<endl;
        cout<<"\n";
        cout<<"\t\t\t\tPASSWORD :";
        {
            for(int i=0;i<3;i++)
            {
                a=_getch();
                password[i]=a;
                cout<<"*";
            }
        }
            //cout<<password;
            if(strcmp(username,"rrr")==0)
            if(strcmp(password,"rrr")==0)
            {
                cout<<endl;
                t=0;
                cout<<"\n";
                cout<<"\t\t\t\tLOGGED IN AS RECEPTIONIST";
                cout<<endl;
                system("pause");
                cout<<endl;
                displaymenu();
            }
            else
            {
                cout<<endl;
                t=1;
                cout<<"Sorry,Wrong password!!";
                cout<<endl;
            }
        else
        {
            cout<<endl;
            t=1;
            cout<<"Sorry,Wrong username!!";
            cout<<endl;
        }
    }while(t==1);
}
void Manager::login()
{
    int t=1;
    char a;
    system("cls");
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------";
    cout<<"**************************************************MANAGER  DETAILS******************************************************";
    cout<<"\n------------------------------------------------------------------------------------------------------------------------";
    cout<<endl;
    int s=0;
    do
    {
        cout<<endl;
        cout<<"Enter your name :";
        cin>>name;
        s=0;
        for(int i=0;i<20;i++)
        {
            if(isdigit(name[i])==1)
            {
                cout<<"\nSorry!!Invalid Name";
                cout<<"\nEnter only characters ";
                /*cout<<"\n Enter your name:";
                cin>>name;*/
                s=1;
                break;
            }
        }
    }while(s==1);
    cout<<endl;
    cout<<"Enter id :";
    cin>>id;
    cout<<endl;

    //char a;
    system("cls");
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------";
    cout<<"**************************************************LOGIN  DETAILS******************************************************";
    cout<<"\n------------------------------------------------------------------------------------------------------------------------";
    cout<<endl;
    cout<<"Enter the login details :";
    cout<<endl;
    do
    {
        cout<<"\t\t\t\tUSERNAME :";
        cin>>username;
        cout<<endl;
        cout<<"\t\t\t\tPASSWORD :";
        {
            for(int i=0;i<7;i++)
            {
                char b='\0';
                b=_getch();
                password[i]=b;
                cout<<"*";
            }
        }


       cout<<password;
        if(strcmp(username,"manager")==0)
            if(strcmp(password,"manager")==0)
            {
                cout<<endl;
                cout<<endl;
                t=0;
                cout<<"\t\t\tLOGGED IN AS MANAGER";
                cout<<endl;
                cout<<"\n";
                system("pause");
                cout<<endl;
                displaymenu();
            }
            else
            {
                cout<<endl;
                t=1;
                cout<<"Wrong password";
                cout<<endl;
            }
        else
        {
            cout<<endl;
            t=1;
            cout<<"Wrong username";
            cout<<endl;
        }
    }while(t==1);
}
void Receptionist::displaymenu()
{
    int t=1;
    int ch;
    system("cls");
    cout<<endl;
    cout<<"\t\t\t\t*****************RECEPTIONIST DISPLAY MENU****************";
    cout<<endl;
    cout<<"\n\t\t\t\t----------------------------------------------------------";
    do
    {
        cout<<endl;
        cout<<"\t\t\t\t||------------------------------------------------------||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t1.BOOK ROOM\t\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t2.CHECK OUT\t\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t3.DISPLAY CUSTOMER DETAILS\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t4.MODIFY CUSTOMER DETAILS\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t5.DELETE RECORD\t\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t6.ORDER FOOD\t\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t7.EXIT\t\t\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||------------------------------------------------------||";
        cout<<endl;
        cout<<"\t\t\t\t----------------------------------------------------------";
        cout<<endl;
        cout<<"\nEnter the choice :";
        cin>>ch;
        switch(ch)
        {
            case 1:bookroom();
                    t=0;
                    system("cls");
                    displaymenu();
                    break;
            case 2:checkout();
                    system("cls");
                    displaymenu();
                    t=0;
                    break;
            case 3:display_customer_details();
                    system("cls");
                    t=0;
                    displaymenu();
                    break;
            case 4:modify_customer_details();
                    system("cls");
                    t=0;
                     displaymenu();
                    break;
            case 7://exit();
                    t=0;
                    break;
            case 5:delete_record();
                    t=0;
                    displaymenu();
                    break;
            case 6:order();
                    t=0;
                    displaymenu();
                    break;

            default:cout<<"\nEnter only valid choice ";
                    break;
        }
    }while(t==1);
}
void Receptionist::bookroom()
{
   /* char type;
    cout<<"\nEnter customer type (foreigner-f,Indian-i) :";
    cin>>type;
    if(type=='f')
    {
      c=new foreigners;
      c->Check_in();
    }
    else
    {
        c=new nonforeigners;
        c->Check_in();
    }*/
    c=new Customer[n];
    c->Check_in(c,n);
}
void Receptionist::display_customer_details()
{
    system("cls");
    int ch;
    cout<<"\n************************************************** DISPLAY MENU*********************************************************";
    cout<<"\n";
    cout<<"1.PARTICULAR CUSTOMER RECORD";
    cout<<"\n";
    cout<<"2.DISPLAY ALL CUSTOMER RECORD";
    cout<<endl;
    cin>>ch;
//    int ch;
    switch(ch)
    {
       case 2: c->displaycustomerdetails(c,n);
                displaymenu();
                break;
        case 1:c->display();
                displaymenu();
                break;
    }

}
void Manager::displaymenu()
{
    int t=1;
    int ch;
    system("cls");
    cout<<endl;
    cout<<"**********************************************MANAGER DISPLAY MENU******************************************************";
    cout<<endl;
    cout<<"\n\t\t\t\t----------------------------------------------------------";
    cout<<endl;
    do
    {

        cout<<"\t\t\t\t||\t\t1.DISPLAY CUSTOMER DETAILS\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t2.ORDER STOCK\t\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t3.DISPLAY ORDERED STOCK\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t4.COMPLAIN RECORD\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t5.CHECK FOOD MENU\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||\t\t6.EXIT\t\t\t\t\t||";
        cout<<endl;
        cout<<"\t\t\t\t||------------------------------------------------------||";
        cout<<endl;
        cout<<"\t\t\t\t----------------------------------------------------------";
        cout<<endl;
        cout<<"\nEnter your choice :";
        cin>>ch;
        switch(ch)
        {
            case 2:purchase_stock();
                    t=0;
                    system("cls");
                    displaymenu();
                    break;
            case 1:display_customer_details();
                    t=0;
                    system("cls");
                    displaymenu();
                    break;
            case 3:display_stock();
                    system("cls");
                    t=0;
                    displaymenu();
                    break;
            case 4:complain_record();
                    system("cls");
                    t=0;
                    displaymenu();
            case 5:check_food_menu();
                    system("cls");
                    system("cls");
                    t=0;
                    displaymenu();
                    break;
            case 6:t=0;
                    //system("cls");
                    break;
            default:cout<<"\nEnter only valid choice ";
                    break;
        }

    }while(t==1);
}
/*void Manager::display_customer_details()
{
    c->displaycustomerdetails();
}*/
void Manager::purchase_stock()
{
    int n;
    cout<<"\nEnter the no.of stock you want to purchase :";
    cin>>n;
    s=new stock[n];
    s->read(s,n);

}
void Manager::display_stock()
{

    s->display(s,n);

}
void Manager::display_customer_details()
{
    c->displaycustomerdetails(c,n);
}
void Manager::complain_record()
{
    char ch[100000];
    char name1[20];
    system("cls");
    cout<<"\n\t\t\t\t---------------------COMPLAIN RECORD-----------------------";
    cout<<"\n\t\t\tEnter the customer name :";
    cin>>name1;
    cout<<"\n\t\t\tEnter your complain :";
    cin.ignore();
    cin.getline(ch,100000);
    cout<<"\nComplain has been recorded ";
    cout<<"\nThank you! Will look into it as soon as possible";
    cout<<endl;
    system("pause");

}
void Receptionist::checkout()
{
    c->generatebill();
}
void Receptionist::modify_customer_details()
{
    c->modify();
}
void Receptionist::delete_record()
{
    c->delete_record();
}
void Manager::check_food_menu()
{
    system("cls");
    cout<<"\n\t\t\t***********************FOOD MENU******************************";
    int ch;
    cout<<"\n\t\t\t\t1.APPEND FOOD MENU";
    cout<<"\n\t\t\t\t2.DISPLAY ALL CONTENTS";
    cout<<"\n";
    cout<<"\nEnter your choice :";
    cin>>ch;
    f=new Food_items;
    switch(ch)
    {
        case 1:f->input();
                break;
        case 2:f->display_all();
                break;
        default:cout<<"\nEnter only valid choice ";
                break;
    }
}
void Receptionist::order()
{
    f=new Food_items;
    f->display_all();
    c->Order_fooditem();
}

