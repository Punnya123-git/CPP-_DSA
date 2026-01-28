#include <iostream>
using namespace std;

string isPrime(int n){
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            return "not prime";
        }
    }
    return "prime";
}

void printdigits(int n){
    int count=0;
    while(n!=0){//tc-O(log10 n)
        int digit=n%10;
        cout<<digit<<endl;
        count++;

        n=n/10;
    }
    cout<<count<<endl;
}

void sumofdigits(int n){
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum+=digit;

        n/=10;
    }
    cout<<sum<<endl;
}

bool armstrongNumber(int n) {
        int copyN=n;
        int sumofcubes=0;
        
        while(n!=0){
            int digit=n%10;
            sumofcubes+=(digit*digit*digit);
            
            n/=10;
        }
        return sumofcubes==copyN;
}

int gcd(int a , int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}

int lcm(int a,int b){
    int g=gcd(a,b);
    return (a*b)/g;
}
int main(){
    int n=3468;

    cout<<isPrime(n)<<endl;
    printdigits(n);
   // cout<<(int)(log10(n)+1)<<endl;/shortcut to find no. of digits in given no.
    sumofdigits(n);

    if(armstrongNumber(n)){
        cout<<"is armstrong number\n";
    }
    else{
        cout<<"not armstrong number\n";
    }
    cout<<endl;
    
    cout<<"gcd="<<gcd(20,28)<<endl;
    cout<<"lcm="<<lcm(20,28)<<endl;

    return 0;
}