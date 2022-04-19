/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void swip(int *xp, int *yp)
{
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

void selectionSort(int arr[], int n)
{
    int i,j, min;
    for(i=0; i<n; i++)
    {
        min=i;
        for(j=i; j<n;j++)
        {
            if(arr[j]<arr[min])
                min=j;
        }
        swip(&arr[min], &arr[i]);
    }
}
void printArray(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={2,43,72,15,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr,n);
    return 0;
    
}

