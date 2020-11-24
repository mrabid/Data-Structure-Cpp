#include <iostream>
using namespace std;

void maxValue(int arr[], int n)
{
    int i, v1, v2;
    if (n < 2)
    {
        cout << "Wrong Input";
    }
    v1 = v2 ;
    for (i = 0; i < n ; i ++)
    {
        if (arr[i] > v1)
        {
            v2 = v1;
            v1 = arr[i];
        }
        else if (arr[i] > v2)
        {
            v2 = arr[i];
        }
    }
    cout <<"The second largest elements is: "<<v2;
}
int main()
{
    int arr[] = { 0, 63, 11, 5, 91, 4, 30, 79, 6, 59 };
    int n = sizeof(arr) / sizeof(arr[0]);
    maxValue(arr, n);

    return 0;
}
