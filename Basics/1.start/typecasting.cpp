#include <iostream>
using namespace std;

int main() {
  char grade = 'A'; // int gives ascii vAlue of A
    int value = grade;

    double price = 100.99;
    int newprice = (int)price;
    
    cout << value <<endl; 
    cout << price <<endl;
    cout << newprice <<endl;
    return 0;
}