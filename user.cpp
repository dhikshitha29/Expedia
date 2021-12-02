
#include"user.h"
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include"customer.h"
using namespace std;
void User::exit()
{
     system("cls");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"************************************************************************************************************************";
    cout<<"------------------------------------------------------------------------------------------------------------------------";
    cout<<endl;
    cout<<"\t\t\t\t\t\tTHANK YOU!!!";
    cout<<endl;
    cout<<"\t\t\t\t\t\tHOTEL MANAGEMENT SYSTEM";
    cout<<endl;
    cout<<"\t\t\t\t\t\tDONE BY:";
    cout<<endl;
    cout<<"\t\t\t\t\t\t19PD09-DHIKSHITHA.A";
    cout<<endl;
    cout<<"\t\t\t\t\t\t19PD38-SWATHI PRATHAA.P";
    cout<<endl;
    cout<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------------------";
    cout<<"************************************************************************************************************************";
//    exit(1);
    system("pause");
    }
//void stock::read(stock s[],int n)
//{
//    system("cls");
//    system("cls");
//    cout<<"\n**********************************************";
//    cout<<"\nENTER THE ORDER DETAILS:";
//    ofstream fout("Stock.dat",ios::app);
//    for(int i=0;i<n;i++)
//    {
//        cout<<"\nProduct name : ";
//        cin>>name;
//        cout<<"\nStatus(quantity) : ";
//        cin>>status;
//        fout.write((char*)this,sizeof(stock));
//    }
//    fout.close();
//
//
//
//}
//void stock::display(stock s[],int n)
//{
//    system("cls");
//    int i=0;
//    cout<<"\n**********************************************";
//    cout<<"\nSTOCK DETAILS ARE: ";
//    cout<<"\n---------------------";
//    cout<<endl;
//    cout<<endl;
//    ifstream fin("Stock.dat",ios::in);
//    if(!fin)
//    {
//        cout<<"\nFILE NOT FOUND";
//    }
//    /*while(fin.read((char*)this,sizeof(stock)))
//    {
//        cout<<"\nProduct name : "<<name;
//        cout<<"\nStatus       : "<<status;
//    }*/
//    while(fin.read((char*)this,sizeof(stock)))
//    {
//
//        cout<<"\nNAME       : "<<name;
//        cout<<"\nSTATUS       : "<<status;
//    }
//    cout<<endl;
//    system("pause");
//    cout<<endl;
//    fin.close();
//}
void stock::read(stock s[],int n)
{
    system("cls");
    cout<<"\n******************************************************************************************************************";
    cout<<"\nENTER THE ORDER DETAILS:";
    ofstream fout("Stock.dat",ios::app);
    for(int i=0;i<n;i++)
    {
        cout<<"\nProduct name : ";
        cin>>name;
        cout<<"\nStatus(quantity) : ";
        cin>>status;

        fout.write((char*)this,sizeof(stock));
    }
    system("pause");
    fout.close();



}
void stock::display(stock s[],int n)
{
    system("cls");
    int i=0;
    cout<<"\n******************************************************************************************************************";
    cout<<"\nSTOCK DETAILS ARE: ";
    ifstream fin("Stock.dat",ios::in);
    if(!fin)
    {
        cout<<"\nFILE NOT FOUND";
    }
    while(fin.read((char*)this,sizeof(stock)))
    {
        cout<<"\nProduct name : "<<name;
        cout<<"\nStatus       : "<<status;
    }
    cout<<endl;
    system("pause");
    cout<<endl;
    fin.close();
}
void Food_items::input()
{
    system("cls");
    int n;
    cout<<"\n*****************************APPEND FOOD ITEMS*************************************";
    cout<<"\nEnter the no.of food items you want to add :";
    cin>>n;
    cout<<endl;
    ofstream fout("food.dat",ios::app);
    for(int i=0;i<n;i++)
    {
        cout<<"\nFood name : ";
        cin>>name;
        cout<<"\nPrice : ";
        cin>>cost;
        fout.write((char*)this,sizeof(Food_items));
    }
    system("pause");
    fout.close();


}
void Food_items::display_all()
{
   // Food_items f;
    system("cls");
    cout<<"\n\t\t\t\t*************FOOD MENU*****************";
    cout<<"\n\t\t\t\t---------------------------------------";
    ifstream fin("food.dat",ios::in);
    if(!fin)
    {
        cout<<"\nFILE NOT FOUND";
    }
    cout<<endl;
    while( fin.read((char*)this,sizeof(Food_items)))
    {

        cout<<"\n\t\t\tNAME       : "<<name;
        cout<<"\n\t\t\tCOST       : "<<cost;
    }
    cout<<endl;
    system("pause");
    cout<<endl;
    fin.close();
}

