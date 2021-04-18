//Static memory 2d array
#include<iostream>
using namespace std;

void printGrades(int grades[2][4],int numofSubjs,int numOfYear)
{
    for(int i = 0; i < numOfYear; ++i)
    {
        for(int j = 0; j < numofSubjs; ++j)
        {
            cout << grades[i][j] << " ";
        }
        cout<<endl;
    }
}



int main()
{
    int numOfYear = 2;
    int numOfSubjs = 4;
    int grades[2][4] =
    {
        {100,88,99,100},
        {99,92,95,94}
    };
    printGrades(grades, numOfSubjs, numOfYear);

    return 0;
}
