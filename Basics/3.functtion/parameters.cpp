#include <iostream>
#include <cmath>
using namespace std;

// sum of 2 no.
int sum(int a, int b) // parameters
{
    int s = a + b;
    return s;
}

// min of 2 no.
int minof2(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// sum of 1 to n
int sumN(int N)
{
    int sum = 0;
    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }
    return sum;
}

// N factorial
int fac(int f)
{
    int count = 1;
    for (int j = 1; j <= f; j++)
    {
        count = count * j;
    }
    return count;
}

// sum of digits ex-145=1+4+5=10
int sumofdigits(int s)
{
    int digitsum = 0;

    while (s > 0)
    {
        int lastdigit = s % 10;
        s = s / 10;
        digitsum += lastdigit;
    }
    return digitsum;
}

// nCr binomial coefficient
int nCr(int n, int r)
{
    int fac_n = fac(n);
    int fac_r = fac(r);
    int fac_n$r = fac(n - r);

    return fac_n / (fac_r * fac_n$r);
}

// no. is prime or not
void prime(int p)
{
    bool isprime = true;

    // for(int i=2 ; i<=sqrt(p) ; i++){
    for (int i = 2; i * i <= p; i++)
    {

        if (p % i == 0)
        {
            isprime = false;
            break;
        }
    }

    if (isprime == true)
    {
        cout << p << " is a prime number" << endl;
    }
    else
    {
        cout << "not prime" << endl;
    }

    // return  ;
}
bool prime2(int p)
{
    bool isprime = true;

    for (int i = 2; i < p; i++)
    {

        if (p % i == 0)
        {
            isprime = false;
            break;
        }
    }

    return isprime;
}

// if a no. is power of 2 without using loops
bool isPowerof2(int x)
{
    return (x > 0) && ((x & (x - 1)) == 0);
}

// reverse a no.
int revAnum(int y)
{

    // method-1
    int rem = 0;
    int rev = 0;
    while (y)
    {
        rem = y % 10;
        rev = (rev * 10) + rem;
        y = y / 10;
    }

    // return rev;
    // method2
    // string s = to_string(y);
    // reverse(s.begin() , s.end());
    // int ans = stoi(s);
    // return ans;
}

int main()
{
    int n = 8, r = 2, x = 32, y = 125;
    nCr(n, r);
    cout << sum(10, 5) << endl; // arguments
    cout << minof2(8, 9) << endl;
    cout << sumN(10) << endl;
    cout << fac(10) << endl;
    cout << sumofdigits(2356) << endl;
    cout << nCr(n, r) << endl;
    prime(7);
    cout << prime2(7) << endl;

    if (prime2(7) == 0)
    {
        cout << "False" << endl;
    }
    else
    {
        cout << "True" << endl;
    }
    if (isPowerof2(x))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    cout << revAnum(y) << endl;
    return 0;
}