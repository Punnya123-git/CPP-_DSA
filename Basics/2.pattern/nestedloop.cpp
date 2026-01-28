#include <iostream>
using namespace std;

int main()
{

    // for (int i = 1; i <= 5; i++)//no. of lines
    // {
    //    int x = 5;
    //  for (int j = 1; j <= x; j++)
    //  {
    //    cout << "*";
    //}

    // cout << endl;
    // }

    // patern of 1 to 4
    // int n = 4;
    // for (int i = 1; i <= n; i++)
    //{
    //  for (int j = 1; j <= n; j++)
    //{
    //  cout << j<<" ";
    //}
    // cout << endl;
    //}

    // pattern of abcd
    //  for(int i=1 ; i<=n ; i++){
    //      char ch='A';
    //      for(int j=1 ; j=<n ; j++){
    //          cout<<ch<<" ";
    //          ch=ch+1;
    //      }
    //      cout<<endl;
    //  }

    // pattern  123
    //  456
    //  789
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }

    //     cout << endl;
    // }

    // pattern abc
    // def
    // ghi
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // right angle trigle pattern with *
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // pattern 1
    //  22
    //  333
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << i + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // pattern A
    // BB
    // CCC
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << ch << " ";
    //     }
    //     ch++;

    //     cout << endl;
    // }

    // pattern A
    // BC
    // DEF
    //  char ch = 'A';
    //  for (int i = 0; i < n; i++)
    //  {
    //      for (int j = 0; j < i + 1; j++)
    //      {
    //          cout << ch << " ";
    //          ch++;
    //      }
    //      cout << endl;
    //  }

    // pattern ****
    // ***
    //**
    //*
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << "*" << " ";
    //     }

    //     cout << endl;
    // }

    // pattern 123
    // 45
    // 6
    // int x=1;
    // for (int i = 0; i < n; i++)
    //  {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout <<x<< " ";
    //         x++;
    //     }

    //     cout << endl;
    //  }

    // pattern 111
    // 22
    // 3
    // int x = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << x << " ";
    //     }
    //     x++;
    //     cout << endl;
    // }

    // pattern 1
    // 12
    // 123
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // pattern 1
    // 21
    // 321
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j > 0; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // pattern 1
    // 23s
    // 456
    // int x = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << x << " ";
    //         x++;
    //     }
    //     cout << endl;
    // }

    // pattern A
    // BC
    // DEF
    //  char ch='A';
    //  for(int i=0 ; i<n ; i++){
    //      for(int j=0 ; j<i+1 ; j++){
    //          cout<<ch<<" ";
    //          ch++;
    //      }
    //      cout<<endl;
    //  }

    // pattern A
    // BA
    // CBA
    //    for (int i = 0; i < n; i++)
    //     {
    //         char ch='A'+i;
    //         for (int j = 0 ; j <=i ; j++)
    //         {
    //             cout << ch<< " ";
    //             ch--;
    //         }
    //         cout << endl;
    //      }

    // pattern 1111
    // 222
    // 33
    // 4
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++) // i times space
    //         cout << " ";
    //     for (int j = 0; j < n - i; j++) // for number
    //     {
    //         cout << i + 1;
    //     }
    //     cout << endl;
    // }

    // pattern AAAA
    // BBB
    // CC
    // D
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i; j++)
    //         cout << " ";
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // //pyramid pattern
    // for(int i=0 ; i<n ; i++)
    // {
    //     for(int j=1 ; j<=n-i-1 ; j++){//spaces
    //     cout<<" ";
    //     }
    //     for(int j=1 ; j<=i+1 ; j++)//num 1
    //     {
    //         cout<<j;
    //     }
    //     for(int j=i ; j>=1 ; j--){//num 2 (backward)
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // diamond pattern
    int n;
    cout << "Enter the number of cols : ";
    cin >> n;

    // up
    //  for(int i=0;i<n;i++){
    //      //space
    //      for(int j=0;j<n-i-1;j++){
    //          cout<<"  ";
    //      }
    //      //star
    //      if(i==0){
    //          cout<<"* ";
    //      }else{
    //          cout<<"* ";
    //          for(int j=0;j<2*i-1;j++){
    //              cout<<"  ";
    //          }
    //          cout<<"* ";
    //      }
    //      cout<<endl;
    //  }

    // //down
    // for(int i=n-2;i>=0;i--){
    //     // /space
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<"  ";
    //     }
    //     // ..star
    //     if(i==0){
    //         cout<<"* ";
    //     }else{
    //         cout<<"* ";
    //         for(int j=0;j<2*i-1;j++){
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout<<endl;

    // }

    // // butterfly pattern
    // // up
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " * ";
    //     }
    //     for (int j = 0; j < n - 2 * i + 2; j++)
    //     {
    //         cout << "   ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // // down
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " * ";
    //     }
    //     for (int j = 0; j < 2 * i; j++)
    //     {
    //         cout << "   ";
    //     }
    //     for (int j = 0; j < n - i; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    //ziz-zag pattern
    int x , y;
    for(int x=2 ; x>=0 ; x--){
        for(int y=0 ; y<=n ; y++){
            if(x==2 || x==0){
                if((x+y)%4==0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }else if(x==1){
                if((x+y)%2==0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }

            }
        }
        cout<<endl;
    }
    return 0;
}
