
class Food_items;
class Customer;
class stock;
class Receptionist;
class Manager;
class User
{
    char username[20];
    char password[20];
public:
    void login();
    void exit();
    void mainmenu();
};
class stock
{
    char name[20];
    int status;//quantity
    Manager *m;
public:
    void display(stock s[],int n);
    void read(stock s[],int n);
};


class Food_items
{
    char name[20];
    int cost;
   // Customer *c;
public:
    Receptionist *r;
    //Customer *c;
    void input();
    void foodbill();
    void display_all();
};

/*class Bill
{
    char name[20];
    //char name[20];
    int telephonenumber;
    char address[20];
    int roomnumber;
public:
    void read();
    void compute();
    void display();
};*/

