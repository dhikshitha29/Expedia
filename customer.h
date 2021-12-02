
/*#ifndef customer_h
#define customer_h
#include"customer.h"*/
class Bill;
class Food_items;
class Customer
{
    int c;
    char id[10];
    char type;
    char name[20];
    char telephonenumber[10];
    char address[100];
    int roomnumber;
    int checkindate;
    int passportnumber;
    int aadharidnumber;
    int nodays;
    char country[20];
    //Food_items *f;
   // Bill *b;

public:
    //void read();
    void Check_in(Customer c[],int n);
   // virtual void Check_out();
    void Pay_bill();
   void generatebill();
    void Order_fooditem();
    int compute(int,int);
    int checkroomavailable(int);
    void display();
    void modify();
    void delete_record();
    void displaycustomerdetails(Customer c[],int n);
};
//#endif


