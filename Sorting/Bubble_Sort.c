#include <stdio.h>

int sort(int array[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return 0;
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if(i == (size-1))
        {
            printf(". ");
        }
        else
        {
            printf(" < ");
        }
    }
    
}

int main()
{
    int array[] = {3,1,6,4,8,5,9,7,2};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array,size);
    printArray(array,size);
    return 0;
}
