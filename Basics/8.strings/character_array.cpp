#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[]={'a' , 'b' , 'c' , '\0'};//"\0" is a null character
    char st[]="hello";

    cout<<str<<endl;//constant pointers
    cout<<strlen(str)<<endl;//ignores null character
    cout<<st[1]<<endl;

    char s[12];

    cout<<"enter char array : ";

    //cin>>s;//hello world
    //cout<<"output : "<<s<<endl;//hello (ignores the word after space)   

    //cin.getline(s , 100 , '$');//$ is a delimiter which limis the word after this sign 
    //cout<<"output : "<<s<<endl;//gives hello world after using cin.getline(s, len , delimiter)

    cin.getline(s,12);

    for(char ch :s){
        cout<<ch<<" ";
    }

    cout<<endl;

    //to calculate length of string
    char c[]="apna college";
    int l=0;

    for(int i=0 ; c[i]!='\0' ; i++){
        l++;
    }

    cout<<"length of string : "<<l<<endl;
    cout<<endl;

    //string is dynamic , contiguous 
    string s1="apna";
    string s2="college";

    string s3=s1+s2;//concatenation
    cout<<s3<<endl;

    //comparison of strings
    string st1="computer";
    string st2="system";

    cout<<(st1==st2)<<endl;//0 which is false
    cout<<(st1<st2)<<endl;//1 which is true bcz c comes first later s
    cout<<st1.length()<<endl;//length of string

    cout<<endl;

    //input string
    string str1;
    cout<<"enter string : ";

    //cin>>str1; // apna college
    //cout<<"output : "<<str1<<endl; //apna (ignore world after space)

    getline(cin , str1);
    cout<<"output : "<<str1<<endl;  
    cout<<endl;

    //loop in a string
    string str2 = "apna college.";

    for(char i :str2){
        cout<<i<<" ";
    }
    cout<<endl;

    //reverse function
    string st1="computer system";

    reverse(st1.begin() , st1.end());//iterators
    return 0;
}