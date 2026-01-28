#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, sum = 0;
    cout << "enter n=";
    cin >> n;
    // sum of n no.
    // for(int i=1 ; i<=n ; i++){
    // sum=sum+i;

    // if(i==5)
    // break;

    // while(i<=n){
    // sum=sum+i;
    // i++;
    // }
    // cout<<sum;

    // n odd no.
    // for(int i=1 ; i<=n ; i++){
    // if(i%2!=0)
    // cout<<i<<endl;
    //  }

    // sum of odd no.
    // for(int i=1 ; i<=n ; i++){
    // if(i%2!=0){
    //  sum=sum+i;
    //}

    // sum of odd no. using while loop
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        i++;
    }

    cout << sum;

    return 0;
}