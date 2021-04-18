#include <stdio.h>

int main(void)
{

    int sortedArray[7],array[] = {1,2,3,4,5,6,7};
    int i,j,k,temp;
    k = 0;
    j= 6;

//sorted array in ascending order
    for(i=0; i<7; i++)
    {
        for(j=i+1; j<7; j++)
        {
            if(array[j] <array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    i = 0;
    j = 6;

    while(i<j)
    {
        printf("%d %d\n",i,j);
        sortedArray[k++] = array[i++];
        // i++;
        sortedArray[k++] = array[j--];
        // k++;
        // j--;
    }

    for(i=0; i<7; i++)
    {
        printf("%d ",sortedArray[i]);
    }

    return 0;

}
