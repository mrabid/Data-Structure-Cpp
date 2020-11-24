#include <iostream>
#include <cstdlib>
using namespace std;

int sumDiagonals(int numArray[][5], int row, int col)
{
    int sum = 0;
    for(int i=0; i<row; ++i)
    {
        for(int j=0; j<col; ++j)
        {
            cout<<numArray[i][j]<<" ";
            if(i==j)
            {
                sum = sum+numArray[i][j];
            }
        }
        cout<<endl;
    }

    return sum;
}
int main()
{
    int row = 5;
    int col = 5;
    int numArray[5][5];
    for(int i=0; i<row; ++i){
        for(int j=0; j<col;++j){
            numArray[i][j] =rand() % (20 - 10) + 10;;
        }
    }
   
    
    cout<<"Sum of diagonal: "<< sumDiagonals(numArray,5,5)<<endl;

    return 0;
}