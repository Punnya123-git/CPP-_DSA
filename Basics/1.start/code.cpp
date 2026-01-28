#include <iostream>
using namespace std;

int main() {
    int age = 25;
    float f = 1.5;
    char c = 'a';
    int arr1[50];
    char arr2[5];
    bool issafe = false;
    double p= 100.89;
    cout<<"space taken by int data type : "<<sizeof(age)<<endl;
    cout<<"space taken by float data type : "<<sizeof(f)<<endl;
    cout<<"space taken by char data type : "<<sizeof(c)<<endl;
    cout<<"space taken by array data type : "<<sizeof(arr1)<<endl;
    cout<<"space taken by array data type : "<<sizeof(arr2)<<endl;
    cout <<sizeof(issafe )<<endl;
    cout<<"age : "<<age<<endl;
    cout<<sizeof(p)<<endl;
    return 0;

}