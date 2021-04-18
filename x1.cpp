#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 1, 2, 3,1, 4, 2, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int current = 0, max = 0;
    int Number, i, j;
    for (i = 0; i < n - 1; i++)
    {
        current = 0;

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << " " << arr[j] << endl;
                current++;
            }
            else
            {
                break;
            }
        }
        if (max < current)
        {
            max = current;
            Number = arr[i];
        }
    }
    cout << "Longest sequence found for " << Number << endl;

    return 0;
}
