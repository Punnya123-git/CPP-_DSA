#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter n = ";
    cin >> n;


    for (int i = 2; i <= n; i++)
    {
        bool isprime = true;

        // a no. is prime or not
        // if(n%i==0){//non prime
        //  isprime = false;
        // break;
        // }
        // }   if(isprime==true){
        //  cout<<n;
        //}
        // else{
        //  cout<<"not prime\n";
        //}
        // return 0;
        //}

        // prime no. from 1 to n

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {

                isprime = false;
                break;
            }
        }

        if (isprime)
        {
            cout << i << endl;
        }
    }
    return 0;
}
