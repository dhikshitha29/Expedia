
#include"user.h"
#include<string.h>
class Customer;
class stock;
class Food_items;
class Receptionist:public User
{
    char id[20];
    char name[20];
    char username[20];
    char password[20];
    Customer *c;
    Food_items *f;
public:
    void login();
    void displaymenu();
    void bookroom();
    void delete_record();
    void order();
    void checkout();
    void generatebill();
    void display_customer_details();
    void modify_customer_details();
    //void take_customerfeedback();
};
class Manager:public User
{
    char id[20];
    char username[20];
    char password[20];
    char name[20];
    Customer *c;
    stock *s;
    Food_items *f;
public:
    void displaymenu();
    void display_stock();
    void login();
    void check_food_menu();
    void display_customer_details();
    void purchase_stock();
    void complain_record();
};

