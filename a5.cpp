1. Write a C++ program to find the largest element of a given array of integers. 
Solve:
#include <iostream>
using namespace std;

int printMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int arr[] = { 21, 11, 27, 5, 81, 4, 30 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"The largest element is: "<<printMax(arr, n);

    return 0;
}
2. Write a C++ program to find the largest three elements in an array.
Solve:
#include <iostream>
using namespace std;

void maxValue(int arr[], int n)
{
    int i, v1, v2, v3;
    if (n < 3)
    {
        cout << " Wrong Input ";
    }
    v3 = v1 = v2 ;
    for (i = 0; i < n ; i ++)
    {
        if (arr[i] > v1)
        {
            v3 = v2;
            v2 = v1;
            v1 = arr[i];
        }
        else if (arr[i] > v2)
        {
            v3 = v2;
            v2 = arr[i];
        }
        else if (arr[i] > v3)
            v3 = arr[i];
    }
    cout <<"Three largest elements is: " <<v1 <<", "<< v2 <<", "<< v3;
}
int main()
{
    int arr[] = { 21, 63, 11, 27, 5, 91, 4, 30, 79, 6, 59 };
    int n = sizeof(arr) / sizeof(arr[0]);
    maxValue(arr, n);
    return 0;
}

3. Write a C++ program to find second largest element in an given array of integers.
Solve: 
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
