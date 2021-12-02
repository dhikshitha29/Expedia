#include<iostream>
#include"customer.h"
#include<string>
#include<string.h>
#include<fstream>
#include"user.h"
//#include<ofstream>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
#include<cstdio>
using namespace std;
//int room[50];
int Customer::checkroomavailable(int r)
{

    int flag=0;

    ifstream fin("Record.dat",ios::in);

    while(!fin.eof())
    {

        fin.read((char*)this,sizeof(Customer));
        if(roomnumber==r)
        {

            flag=1;
            break;

        }

    }

    fin.close();
    return(flag);

}


void Customer::Check_in(Customer c[],int n)
{


        system("cls");
        cout<<"\n********************************************************CHECK IN********************************************************";
        int r,flag;
        char ch;
        cout<<endl;
        cout<<"\n\t\t\t\t****************** Enter Customer Detalis **************** ";
        cout<<"\n\t\t\t\t----------------------------------------------------------";
        cout<<"\n\t\t\t\t||------------------------------------------------------||";
        do
        {
                ofstream fout("Record.dat",ios::app);

                cout<<"\n\t\t\t\t||\t\t\tROOM NUMBER\t\t\t||";
                cout<<"\n\t\t\t\t||\t\tTotal no. of Rooms - 50\t\t\t||";
                cout<<"\n\t\t\t\t||\t\tOrdinary Rooms from 1 - 30\t\t||";
                cout<<"\n\t\t\t\t||\t\tLuxuary Rooms from 31 - 45\t\t||";
                cout<<"\n\t\t\t\t||\t\tRoyal Rooms from 46 - 50\t\t||";
                cout<<"\n\t\t\t\t||------------------------------------------------------||";
                cout<<"\n\t\t\t\t----------------------------------------------------------";
                cout<<endl;
                cout <<"\nEnter the Room no. you want to stay in : "<<endl;
                cin>>r;

                flag=checkroomavailable(r);

                if(flag)
                {
                    cout<<"\nSorry..!!!Room is already booked";
                    cout<<endl;
                    system("pause");
                }


                else
                {

                    roomnumber=r;
                    cout<<endl;
                    cout<<"Name:";
                    cin>>name;
                    int s=0;
                    do
                    {
                        for(int i=0;i<20;i++)
                        {
                            if(isdigit(name[i])==1)
                            {
                                cout<<endl;
                                cout<<"\n Enter only characters ";
                                cout<<"\nEnter your name:";
                                cin>>name;
                                break;
                                s=1;

                            }
                        }
                    }while(s==1);
                    cout<<endl;
                    cout<<"Enter the id :";
                    cin>>id;
//                    int check=0;
//                    do
//                    {
//                        if(id>='a'&&id<='z'||id>='A'&&id<='Z')
//                        {
//                            check=1;
//                            cout<<"\nEnter only numbers";
//                            cout<<"\nEnter the id";
//                            cin>>id;
//                        }
//                        else
//                        {
//                            break;
//                        }
//
//                    }while(check==1);

                    cout<<endl;
                    cout<<"Phone No(10 digits): ";
                    cin>>telephonenumber;
                    int t;
                    do
                    {
                        int t=0;
                        for(int i=0;i<10;i++)
                        {
                            if(telephonenumber[i]>='a'&&telephonenumber[i]<='z')
                            {
                                t=1;
                                cout<<endl;
                                cout<<"Enter only valid telephone number :";
                                cin>>telephonenumber;
                            }
                        }

                    }while(t==1);
                    cout<<endl;
                    cout<<"Enter the address :";
                    cin.ignore();
                    cin.getline(address,100);
                    cout<<endl;
                    cout<<"Enter the no.of days of stay :";
                    cin>>nodays;

                    cout<<endl;
                    cout<<"Enter the customer type (f-foreigner,i-Indian) :";
                    cin>>type;
                    do
                    {
                        int t=0;
                        if(type!='f'&&type!='i')
                        {
                            t=1;
                            cout<<endl;
                            cout<<"Enter the customer type (f-foreigner,i-Indian) :";
                            cin>>type;
                        }

                    }while(t==1);

                    //cout<<endl;
                    if(type=='i')
                    {
                        cout<<endl;
                        cout<<"Enter the Adhar number :";
                        cin>>aadharidnumber;
                        strcpy(country,"India");

                    }
                    else
                    {
                        cout<<endl;
                        cout<<"Enter the Passport number :";
                        cin>>passportnumber;
                        cout<<endl;
                        cout<<"Enter the country name :";
                        cin>>country;
                    }
                    fout.write((char*)this,sizeof(Customer));
                    cout<<"\n SUCCESS,ROOM IS BOOKED...!!!";
                    cout<<"\n Do you want to add another room(y-yes,n-no) ?";
                    cin>>ch;
                    fout.close();
                }
        }while(ch=='y'||ch=='Y');

}

void Customer::displaycustomerdetails(Customer c[],int n)
{
    system("cls");
    cout<<"\n**********************************************DISPLAYING ALL COSTUMER DETAILS*******************************************";
    cout<<"\n --------------------------------------------------Customer details----------------------------------------------------- ";
    //ofstream fout("Record.dat",ios::app);
    ifstream fin("Record.dat",ios::in);
    //fin.open("Record.dat",ios::in);
    if(!fin)
    {
        cout<<"\n FILE NOT FOUND";
    }
    while(fin.read((char*)this,sizeof(Customer)))
    {
            cout<<"\n Customer details";
            cout<<endl;
            cout<<"************************************************************************************************************************";
            cout<<endl;
            cout<<"------------------------------------------------------------------------------------------------------------------------";
            cout<<endl;
            cout<<"Customer name :"<<name;
            cout<<endl;
            cout<<"Id :"<<id;
            cout<<endl;
            cout<<"Telephone number :"<<telephonenumber;
            cout<<endl;
            cout<<"Address :"<<address;
            cout<<endl;
            cout<<"No.of days of stay :"<<nodays;
            cout<<endl;
            //cout<<"Passport number :"<<passportnumber;
            //cout<<endl;
            cout<<"\n Country name :"<<country;
            cout<<"\n ";
            cout<<"------------------------------------------------------------------------------------------------------------------------";
            cout<<endl;
            cout<<"************************************************************************************************************************";
            cout<<endl;
    }
    cout<<endl;
    system("pause");
    fin.seekg(0, ios::beg);
    fin.close();

}

void Customer::generatebill()
{
    system("cls");
    cout<<"\n*******************************************************GENERATE BILL ***************************************************";
    int r,flag=0;
    cout<<"\n Enter the room number of the customer to generate the bill :";
    cin>>r;
    Customer h1;
    ifstream f1;
    f1.open("Record.dat",ios::in|ios::binary);

    if(!f1)
        cout<<"Cannot open";

    else
    {

        while(f1)
        {

            f1.read((char*)&h1,sizeof(Customer));
            if (h1.roomnumber == r)
            {
                flag=1;
                if(h1.roomnumber>=1&&h1.roomnumber<=30)
                    {
                        float price;
                        price=compute(2000,h1.nodays);
                        //cout<<"\nMR'/'MS. "<<h1.name<<"  "<<"your bill amount is : "<<price;
                        cout<<endl;
                        /*cout<<"Name      "<<"\t"<<"Contact   "<<"\t"<<"Room"<<"\t"<<"Amount";
                        cout<<endl;
                        cout<<h1.name<<"\t"<<h1.telephonenumber<<"\t"<<h1.roomnumber<<"  "<<"\t"<<price;*/
                        cout<<endl;
                        cout<<"************************************************************************************************************************";
                        cout<<endl;
                        cout<<"------------------------------------------------------------------------------------------------------------------------";
                        cout<<endl;
                        cout<<"\n\t\t\t\t\t\tName        :"<<h1.name;
                        cout<<endl;
                        cout<<"\t\t\t\t\t\tContact     :"<<h1.telephonenumber;
                        cout<<endl;
                        cout<<"\t\t\t\t\t\tRoom        :"<<h1.roomnumber;
                        cout<<endl;
                        cout<<"\t\t\t\t\t\tPrice       :"<<price;
                        cout<<"\n\n";
                        cout<<"------------------------------------------------------------------------------------------------------------------------";
                        cout<<endl;
                        cout<<"************************************************************************************************************************";
                        cout<<endl;
                        cout<<endl;
                        system("pause");
                    }

                else if (h1.roomnumber>=35&&h1.roomnumber<=45)
                        {
                            float price;
                            price=compute(5000,h1.nodays);
                            //cout<<"\nMR'/'MS. "<<h1.name<<"your bill amount is : "<<price;
                            cout<<endl;
                            /*cout<<"Name      "<<"\t"<<"Contact   "<<"\t"<<"Room"<<"\t"<<"Amount";
                            cout<<endl;
                            cout<<h1.name<<"\t"<<h1.telephonenumber<<"\t"<<h1.roomnumber<<"  "<<"\t"<<price;
                            system("pause");*/
                            cout<<"\t\t\t\tName        :"<<h1.name;
                            cout<<endl;
                            cout<<"\t\t\t\tContact     :"<<h1.telephonenumber;
                            cout<<endl;
                            cout<<"\t\t\t\tRoom        :"<<h1.roomnumber;
                            cout<<endl;
                            cout<<"\t\t\t\tPrice       :"<<price;
                            cout<<endl;
                            system("pause");
                        }

                else
                       {
                            float price;
                            price=compute(7000,h1.nodays);
                            //cout<<"\nMR'/'MS. "<<h1.name<<"your bill amount is : "<<price;
                            /*cout<<endl;
                            cout<<"Name      "<<"\t"<<"Contact   "<<"\t"<<"Room"<<"\t"<<"Amount";
                            cout<<endl;
                            cout<<h1.name<<"\t"<<h1.telephonenumber<<"\t"<<h1.roomnumber<<"  "<<"\t"<<price;
                            system("pause");*/
                            cout<<"\t\t\t\tName        :"<<h1.name;
                            cout<<endl;
                            cout<<"\t\t\t\tContact     :"<<h1.telephonenumber;
                            cout<<endl;
                            cout<<"\t\t\t\tRoom        :"<<h1.roomnumber;
                            cout<<endl;
                            cout<<"\t\t\t\tPrice       :"<<price;
                            cout<<endl;
                            system("pause");
                        }
                break;

            }

        }
        if(flag==0)
        {
            cout<<"\nRoom not found";
            cout<<endl;
            system("pause");

        }

    }
    f1.close();
  //getch();

}

int Customer::compute(int r,int s)
{
    float txr=0.20;
    float calc;
    calc=r*txr;
    float total;
    total=r*s+calc;
    return total;

}

void Customer::display()
{
    system("cls");

    ifstream fin("Record.dat",ios::in);
    int r,flag=0;
    cout<<"\n*******************************************************DISPLAY DETAILS*************************************************";
    cout<<"\n Enter room no. for a particular customer`s details :- "<<endl;
    cin>>r;

    do
    {

        fin.read((char*)this,sizeof(Customer));
        if(roomnumber==r)
        {

            system("cls");
            cout<<"\n ------------------------------------------------------Customer Details-------------------------------------------------";
            cout<<"\n ***********************************************************************************************************************";
            cout<<"\n\nRoom no: "<<roomnumber;
            cout<<"\nName: "<<name;
            cout<<"\nAddress: "<<address;
            cout<<"\nPhone no: "<<telephonenumber;
            flag=1;
            break;

        }
        if(fin.eof())
        {
            break;
        }

    }while(!fin.eof());

    if(flag==0)
        cout<<"\n Sorry Room no. not found or vacant....!!";
    cout<<endl;
    system("pause");
}
void Customer::modify()
{
    int r;
    system("cls");
    long pos,flag=0;
    cout<<"\n*********************************************MODIFY DETAILS*******************************************************";
    cout<<"\n Enter the room number :";
    cin>>r;
    fstream file("Record.dat",ios::in|ios::out|ios::binary);

    while(!file.eof())
    {

        pos=file.tellg();
        file.read((char*)this,sizeof(Customer));

        if(roomnumber==r)
        {

            cout<<"\nENTER NEW DETAILS";
    ////cout<<"\n -----------------";
            cout<<"\nName: ";
            cin>>name;
            cout<<"\nAddress: ";
            cin.ignore();
            cin.getline(address,100);
            cout<<endl;
            cout<<"Phone no: ";
            cin>>telephonenumber;
            file.seekg(pos);
            file.write((char*)this,sizeof(Customer));
            cout<<"\nRecord is modified....!!";
            cout<<endl;
            system("pause");
            flag=1;
            break;

        }

    }

        if(flag==0)
            cout<<"\nSorry Room no. not found or vacant...!!";
        file.close();

}
void Customer::delete_record()
{
    system("cls");
    int flag=0;
    int r;
    cout<<"********************************************DELETE RECORD***********************************************************";
    cout<<"\nEnter the room number :";
    cin>>r;
    char ch;
    ifstream fin("Record.dat",ios::in);
    ofstream fout("temp.dat",ios::out);

    while(fin.read((char*)this,sizeof(Customer)))
    {


        if(roomnumber==r)

        {

            cout<<"\n Name: "<<name;
            cout<<"\n Address: "<<address;
            cout<<"\n Phone No: "<<telephonenumber;
            //cout<<"\n\n Do you want to delete this record(y/n): ";
            flag=1;
            continue;

        }
        else
            fout.write((char*)this,sizeof(Customer));


    }

        /*else
            fout.write((char*)this,sizeof(Customer));*/
    fin.close();
    fout.close();

    if(flag==0)
    {
        cout<<"\n Sorry room no. not found or vacant...!!";
        cout<<endl;
        system("pause");
    }

    else
    {
        cout<<endl;
        cout<<"\nDELETED SUCCESSFULLY!!";
        cout<<endl;
        system("pause");
        remove("Record.dat");
        rename("temp.dat","Record.dat");

    }
}
void Customer::Order_fooditem()
{
    char order[20];
    char ch;
    do
    {
        cout<<"\n Enter the food item :";
        cin>>order;
        cout<<"\n YOUR ORDER IS PLACED ....";
        cout<<"\n Do you want to order another food item (y-yes,n-no):";
        cin>>ch;

    }while(ch=='y');
}




