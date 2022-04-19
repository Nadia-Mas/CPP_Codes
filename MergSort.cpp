/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


void merge(int array[], int const l, int const m, int const r)
{
    auto const n_subarray1=m-l+1;
    auto const n_subarray2=r-m;
    
    auto *leftArray = new int[n_subarray1];
    auto *rightArray= new int[n_subarray2];
    
    
    for(auto i=0; i<n_subarray1; i++)
    {
        leftArray[i]= array[l +i ];
    }
    for(auto j=0; j<n_subarray2; j++)
    {
        rightArray[j]=  array[m+ 1 + j];
    }
    
    auto indexOfSubArray1=0;
    auto indexOfSubArray2=0;
    int indexOfMergedArray=l;
    
    while(indexOfSubArray1<n_subarray1 && indexOfSubArray2<n_subarray2)
    {
        if(leftArray[indexOfSubArray1]<= rightArray[indexOfSubArray2])
        {   array[indexOfMergedArray]= leftArray[indexOfSubArray1];
            indexOfSubArray1++;
        }
        else
        {
            array[indexOfMergedArray]= rightArray[indexOfSubArray2];
            indexOfSubArray2++;
        }
        indexOfMergedArray++;
    }
    
    while(indexOfSubArray1< n_subarray1)
    {
        array[indexOfMergedArray]= leftArray[indexOfSubArray1];
        indexOfSubArray1++;
        indexOfMergedArray++;
    }
    
    while(indexOfSubArray2<n_subarray2)
    {
        array[indexOfMergedArray]= rightArray[indexOfSubArray2];
        indexOfSubArray2++;
        indexOfMergedArray++;
    }
}

void mergSort(int array[], int const begin, int const end)
{
    if (begin>=end)
        return;
    auto mid= begin +(end-begin)/2;
    mergSort(array,begin,mid);
    mergSort(array, mid+1, end);
    merge(array, begin , mid, end);
}

void print(int arr[], int n)
{
    for(int i=0; i<n ; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    
    int array[]={2,54,63,2,45,13,98,76,54};
    int size= sizeof(array)/ sizeof(array[0]);
    
    cout<<"The enterd array is:"<<endl;
    print(array, size);
    
    mergSort(array,0, size-1);
    cout<<"The sorted array is:"<<endl;
    print(array, size);
    
    

    return 0;
}

