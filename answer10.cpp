#include<iostream>
using namespace std;
int fib(int n)
{
	if(n==1)
	return 0;
	if(n==2)
	return 1;
	else
	return fib(n-1)+fib(n-2);
}
int main()
{
	int nth;
	cout << "Enter the number to find the nth fibonacci term" << endl;
	cin >> nth;
	cout << "The nth Fibonacci number=" << fib(nth);
}
