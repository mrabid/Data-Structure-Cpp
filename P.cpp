#include <iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main( )

{
    int array[10] = {10, 35, 85, 93, 62, 77, 345, 43, 2, 10};

    int n = sizeof(array)/sizeof(array[10]);

    sort(array, array+n);

    cout <<"Array after sorting using default sort is : ";

    for (int i = 0; i < n; ++i)

        cout << array[i] << " ";

    return 0;
}
