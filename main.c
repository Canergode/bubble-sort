#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to sort array using bubble sort algorithm
void bubbleSort(int A[],int n)
{
    int i,j,temp;

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            // Swap if current element is greater than next
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}

int main()
{
    int array[5],i;

    // Seed random number generator
    srand(time(NULL));

    // Fill array with random numbers
    for(i=0;i<5;i++)
    {
        array[i]=rand()%100+1;
        printf("%d ",array[i]);
    }

    // Sort the array
    bubbleSort(array,5);

    // Print sorted array
    printf("\nSorted: ");

    for(i=0;i<5;i++)
    {
        printf("%4d",array[i]);
    }

    return 0;
}
