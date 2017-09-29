#include<iostream>
using namespace std;
int reverse(int a)
{
	static int rem,rev=0;
	if(a)
	{
	rem=a%10;
	rev=rev*10+rem;
	reverse(a/10);
	}
	else
	return 0;
	return rev;
}
int main()
{
	int n,r;
	cout << "Enter the number" << endl;
	cin >> n;
	r=reverse(n);
	if(r==n)
	cout << "The number is a palindrome" << endl;
	else
	cout << "The number is not a palindrome";
}
