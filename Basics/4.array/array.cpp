#include <iostream>
#include <climits>
using namespace std;

// sum of array
int SumofArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

// product of array
int ProdofArray(int arr[], int size)
{
    int prod = 1;
    for (int i = 0; i < size; i++)
    {
        prod = prod * arr[i];
    }
    return prod;
}

// swap max and min no.
int SwapMaxMin(int arr[], int size)
{
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int maxIndex = 0, minIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            maxIndex = i;
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            minIndex = i;
        }
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}
// unique values in array(applicable for only 1 unique value not for more than 1 )
int UniqueValues(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    int arr[] = {1, 3, 4, 4, 3, 5 , 5 ,};
    int size = 7;
    cout << "sum=" << SumofArray(arr, size) << endl;
    cout << "product=" << ProdofArray(arr, size) << endl;

    SwapMaxMin(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;

    int unique = UniqueValues(arr, size);
    cout << "unique values =" << unique << endl;

    return 0;
}