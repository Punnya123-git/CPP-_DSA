#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Dog{
public:
    string name;
    string breed;

    Dog(string name, string breed){
        this->name = name;
        this->breed = breed;
    }

    //setter 
    void setName(string n){
        name = n;
    }

    void display(){
        cout<<"dog name:"<<name<<endl;
        cout<<"breed:"<<breed<<endl;
    }
};

class Rectangle{
public:
    int width;
    int height;
    
    Rectangle(int w, int h){
        this->width = w;
        this->height = h;
    }

    double area(){
        return width*height;
    }

    double perimeter(){
        return 2*(width+height);
    }
};

class Account{
public:
    string name;
    int acc_no;
    double balance;

    Account(string n, int accNo, double bal){
        name = n;
        acc_no = accNo;
        balance = bal;
    }

    void deposit(double amt){
        balance+=amt;
    }

    void withdraw(double amt){
        balance-=amt;
    }

    void display(){
        cout<<"name:"<<name<<endl;
        cout<<"account no.:"<<acc_no<<endl;
        cout<<"balance:"<<balance<<endl;
    }
};

class Bank{
public:
    vector<Account> acc; // collection of accounts
    
    void addAcc(Account a){
        acc.push_back(a);
    }

    void removeAcc(int accNo){
        for(int i=0 ; i<acc.size() ; i++){
            if(acc[i].acc_no == accNo){
                acc.erase(acc.begin()+i);
                break;
            }
        }
    }

    void deposit(int accNo, double amt){
        for(auto a : acc){
            if(a.acc_no == accNo){
                a.deposit(amt);
            }
        }
    }

    void withdraw(int accNo, double amt){
        for(auto a: acc){
            if(a.acc_no == accNo){
                a.withdraw(amt);
            }
        }
    }

    void displayAcc(){
        for(auto a : acc){
            a.display();
        }
    }
};

class TrafficLight{
public: 
    string color;
    int duration;

    TrafficLight(string c, int d){
        color = c;
        duration = d;
    }

    void changeColor(string newColor){
        color = newColor;
    }

    bool isRed(){
        return color == "Red";
    }

    bool isYellow(){
        return color == "Yellow";
    }

    bool isGreen(){
        return color == "Green";
    }

    void display(){
        cout<<"Color:"<<color<<endl;
        cout<<"Duration:"<<duration<<endl;
    }
};

class Library{
public:
    vector<string> books;

    void addBooks(string b){
        books.push_back(b);
    }

    void removeBook(string b){
        for(int i=0 ; i<books.size() ; i++){
            if(books[i]==b){
                books.erase(books.begin()+i);
                break;
            }
        }
    }

    void displayBook(){
        cout<<"books in library:\n";
        for(string b : books){
            cout<<b<<endl;
        }
    }
};

int main(){
    Dog d1("max", "german shepherd");
    d1.display();

    //update
    cout<<"after updating name\n";
    d1.setName("Charlie");
    d1.display();
    cout<<"\n";

    Rectangle r1(5,3);
    cout<<"area:"<<r1.area()<<endl;
    cout<<"perimeter:"<<r1.perimeter()<<endl<<endl;

    Bank b;
    b.addAcc(Account("peter", 101, 5000));
    b.addAcc(Account("arav", 102, 8000));
    b.addAcc(Account("naman", 103, 50000));

    cout<<"all account:\n";
    b.displayAcc();

    cout<<"\nafter depositing 1000 into account 101:\n";
    b.deposit(101, 1000);
    b.displayAcc();

    cout << "\nAfter withdrawing 5000 from account 103:\n";
    b.withdraw(103, 5000);
    b.displayAcc();

    cout<<"\n removed account 102\n";
    b.removeAcc(102);
    cout<<"\n current account\n";
    b.displayAcc();

    cout<<endl;
    TrafficLight t1("Red", 30);
    t1.display();


    cout<<"\nafter changing color:\n";
    t1.changeColor("Yellow");
    t1.display();

    cout<<endl;
    Library l;
    l.addBooks("Romeo & Juliet");
    l.addBooks("DSA");
    l.addBooks("Panchatantra\n");

    l.displayBook();

    cout<<"\nAfter removing dsa from list:\n";
    l.removeBook("DSA");
    l.displayBook();

    return 0;
}