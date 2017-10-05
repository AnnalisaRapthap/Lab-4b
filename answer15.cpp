#include<iostream>
using namespace std;
int min(int a,int b)
{
 if(a>b)
 return b;
 return a;
}
int max(int c, int d)
{
	if(c>d)
	return c;
	return d;
}
int FindMin(int arr[],int n)
{
 if(n==0)
 return arr[0];
 return min(FindMin(arr,n-1),arr[n]);
}
int FindMax(int arr[],int n)
{
	
 if(n==0)
 return arr[0];
 return max(FindMax(arr,n-1),arr[n]);
}
	
int main()
{
 int arr[6]={30,20,9,4,10,6};
 int min,max;
 /* FindMin(arr,size of array -1) */
 min=FindMin(arr,5);
 max=FindMax(arr,5);
 cout << "Minimum=" << min;
 cout << "Maximum=" << max;
 
 return 0;
}
