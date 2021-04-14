#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    int *pointer, *pointer1;

    pointer = (int *) malloc(sizeof(int)); // Using malloc()
    pointer1 = (int *) calloc(5, sizeof(int)); // Using calloc()

    if(pointer == NULL && pointer1 == NULL)
    {
        cout<<"Memory not allocated."<<endl;
    }
    else
    {
        cout<<"Memory allocated."<<endl;
        realloc(pointer, 50);                  // Using realloc()
        if(pointer == NULL)
        {
            cout<<"Memory not reallocated"<<endl;
        }
        else
        {
            cout<<"Memory reallocated successful."<<endl;
        }
    }

    return 0;
}


/*
{
    int *pointer;

//    pointer = (int *) malloc(sizeof(int)); // Using malloc()
    pointer = (int *) calloc(5, sizeof(int)); // Using calloc()

    if(pointer == NULL)
    {
        cout<<"Memory not allocated."<<endl;
    }
    else
    {
        cout<<"Memory allocated."<<endl;
        free(pointer);                      // Using free()
        cout<<"Memory free successful."<<endl;
    }

    return 0;
}
*/
