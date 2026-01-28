#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0, pow = 1;
    long factorial = 1;
    cout << "enter n = ";
    cin >> n;

   // sum of no.divisible by 3 
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum = i + sum;
        }
    }
    cout << sum;

  //  factorial of no.
  for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    cout << factorial;

    return 0;
}