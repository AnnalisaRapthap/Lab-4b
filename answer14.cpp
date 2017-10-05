#include<iostream>
using namespace std;
int sumArray(int arr[],int n)
{
	int sum;
	if(n==0)
	return 0;
	else
	{
		
		sum=sumArray(arr,n-1)+ arr[n-1];
	}
	return sum;
	
}
int main()
{
	int arr[5]={1,2,3,4,5};
	int l=5;
	cout << "The sum of array elements=" << sumArray(arr,l);
}
