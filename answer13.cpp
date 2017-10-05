#include <iostream>
using namespace std;

/* Function declaration */
void printArray(int arr[], int start, int len);


int main()
{
    
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("Elements in the array: ");
    printArray(arr, 0, 10);
    
    return 0;
}
void printArray(int arr[], int start, int len)
{
    /* Recursion base condition */
    if(start >= len)
        return;
        
    /* Prints the current array element */
    printf("%d, ", arr[start]);
    
    /* Recursively call printArray to print next element in the array */
    printArray(arr, start + 1, len); 
}
