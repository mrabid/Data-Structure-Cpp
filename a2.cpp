#include<iostream> 
using namespace std; 
  
int main() 
{ 

    // int arr[][] = {{0,1}, {2,3}}; 
  
    // n = sizeof(arr)/sizeof(arr[0][0]);

    // cout<<n;

    int arr[][] ={ {2,3, 9, 12}, {3, 5, 7, 8}}; 
  
    int n = sizeof(arr)/sizeof(arr[0][0]);

    cout<<n;

    // for (int i = 0; i < 3; i++) 
    // { 
    //     for (int j = 0; j < 2; j++) 
    //     { 
    //         cout << "Element at x[" << i 
    //              << "][" << j << "]: "; 
    //         cout << x[i][j]<<endl; 
    //     } 
    // } 
  
    return 0; 
} 