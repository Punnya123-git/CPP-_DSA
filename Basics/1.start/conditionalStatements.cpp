#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter n = ";
    cin>>n;

    //if(n>=0){
      //  cout<<"n is positive\n";
    //}
    //else {
      //  cout<<"n is negative\n";
    //}
    //if(n%2==0){
      //  cout<<"even\n";
   // }
   //// else{
        cout<<"odd\n";
    //}
    if(n >=90)
{
    cout<<"A\n";
}  
else if(n>=80 && n<90)
{
    cout<<"B\n";
}  
else{
    cout<<"C\n";
}
return 0;
}