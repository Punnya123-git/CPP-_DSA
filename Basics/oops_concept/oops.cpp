#include <iostream>
#include <string>
using namespace std;

class teacher{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    //methods
    void changedept(string newdept){
        dept=newdept;
    }

    //setter -> Setters are used to change (update) the value of private variables safely.
    void setSalary(double s){
        salary=s;
    }

    //getter
    double getSalary(){
        return salary;
    }
};

//encapsulaion
class account{
private:
    double balance;
    string password;//data hiding 

public:
    string accountId;
    string username;
};

// //constructor
// class Student{
// public:
//     string name;
//     //double cgpa;
//     double *cgpaPtr;

// public:
//     Student(string name, double cgpa){
//         this->name=name;
//         //this->cgpa=cgpa;
//         cgpaPtr=new double;
//         *cgpaPtr=cgpa;
//     }

//     Student(Student &obj){
//         this->name=obj.name;
//         //this->cgpa=obj.cgpa;
//         //this->cgpaPtr=obj.cgpaPtr;//shallow copy
//         cgpaPtr=new double;
//         *cgpaPtr = *obj.cgpaPtr;//deep copy
//     }

//     //destructor
//     ~Student(){
//         cout<<"hi, i m destructor i delete everything\n";
//         delete cgpaPtr;//meory leak
//     }

//     void getInfo(){
//         cout<<"name:"<<name<<endl;
//         //cout<<"cgpa:"<<cgpa<<endl;
//         cout<<"cgpa:"<<*cgpaPtr<<endl;
//     }
// };

// //inheritance
// class Person{//parent or base class
// public:
//     string name;
//     int age;

//     Person(string name, int age){
//         this->name = name;
//         this->age = age;
//     }

//     Person(){
//         cout<<"parent constructor"<<endl;
//     }

//     ~Person(){
//         cout<<"i m parent destructor"<<endl;
//     }
// };

// //child or derived class
// class Stu : public Person{
// public:
//     int roll_no;

//     Stu(string name, int age, int roll_no) : Person(name, age){
//         this->roll_no = roll_no;
//         cout<<"child constructor"<<endl;
//     }

//     ~Stu(){
//         cout<<"i m child destructor"<<endl;
//     }

//     void getInfo(){
//         cout<<"name:"<<name<<endl;
//         cout<<"age:"<<age<<endl;
//         cout<<"roll no.:"<<roll_no<<endl;
//     }
// };

// class GradStu : public Stu {//multilevel inheritance
// public:
//     string researchArea;

//     GradStu(string name, int age, int roll_no, string researchArea) : Stu(name, age, roll_no) {
//         this->researchArea = researchArea;
//     }
// };

// class Teacher{
// public:
//     string subject;
//     double salary;

//     Teacher(string subject, double salary){
//         this->subject = subject;
//         this->salary = salary;
//     }
// };

// class TA : public Stu, public Teacher{//multiple inheritance
// public:
//     TA(string name, int age, int roll_no, string subject, double salary) : Stu(name, age, roll_no), Teacher(subject, salary) {
//     }
// };

// //hierarchial inheritance
// class Person{
// public:
//     string name;
//     int age;
// };

// class Student : public Person{
// public:
//     int roll_no;
// };

// class Teacher : public Person{
// public:
//     string sub;
// };

//polymorphism->compile time 
//function overloading
class Print{
public:
    void show(int x){
        cout<<"int:"<<x<<endl;
    }

    void show(char c){
        cout<<"char:"<<c<<endl;
    }
};

//runtime polymorphism
//function overriding
class Parent{
public:
    void getInfo(){
        cout<<"parent class\n";
    }

    virtual void hello(){
        cout<<"hello from p\n";
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout<<"child class\n";
    }

    void hello(){
        cout<<"hello from c\n";
    }
};
 
class Shape{//abstract class
    virtual void draw() = 0;//pure virtual function
};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"drawing a circle\n";
        }
};

void fun1(){//without static keyword
    int a = 0;
    cout<<"a:"<<a<<endl;
    a++;
};

//static variable in function
void fun2(){//with static keyword
    static int a = 0;//initialised statement runs only 1 time
    cout<<"a:"<<a<<endl;
    a++;
};

//static variables in class
class A{
public:
    int i;

    void inc_i(){
        i+=1;
    }
};

//static variables in object
class ABC{
public:
    ABC(){
        cout<<"constructor\n";
    }

    ~ABC(){
        cout<<"destructor\n";
    }
};

int main(){
    // teacher t1;
    // t1.name="shizuka";
    // t1.dept="cse";
    // t1.subject="c++";
    // t1.setSalary(25000);

    // cout<<t1.name<<endl;
    // cout<<t1.getSalary()<<endl;

    // Student s1("nobita", 8.5);
    // Student s2(s1);
    // //s2.getInfo(); //-> gives same info of that of s1
    // s1.getInfo();
    // *(s2.cgpaPtr)=9.2;

    // s2.name = "ash";
    // s2.getInfo();

    // // Stu st1;
    // // st1.name = "chikoo";
    // // st1.age = 12;
    // // st1.roll_no = 1234;
    // // st1.getInfo();

    // Stu st1("chikoo", 12, 1234);
    // st1.getInfo();

    // GradStu st2("motu", 21, 101, "quantum physics");
    // cout<<st2.name<<endl;
    // cout<<st2.researchArea<<endl;

    // TA t2("patlu", 24, 1001, "maths", 25000);
    // cout<<t2.name<<endl;
    // cout<<t2.salary<<endl;

    Print p1;
    p1.show(12);
    p1.show('a');

    Child c1;
    c1.getInfo();
    Parent p2;
    p2.getInfo();

    Child c2;
    c2.hello();

    Circle c3;
    c3.draw();

    fun1();//without static keyword
    fun1();
    fun1();

    fun2();//with static keyword
    fun2();
    fun2();
    fun2();

    A obj1;
    A obj2;

    obj1.i = 100;
    obj2.i = 200;

    cout<<obj1.i<<endl;
    obj1.inc_i();
    cout<<obj1.i<<endl;

    cout<<obj2.i<<endl;
    obj2.inc_i();
    cout<<obj2.i<<endl;

    if(true){
        ABC obj;
    }

    cout<<"end of function\n\n";

    if(true){
        static ABC obj;
    }

    cout<<"end of function\n";


    return 0;
}