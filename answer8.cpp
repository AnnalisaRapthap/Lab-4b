#include<iostream>
using namespace std;
int sumofdigits(int a)
{
	static int rem,sum=0;
	if(a)
	{
	rem=a%10;
	sum=sum+rem;
	sumofdigits(a/10);
	}
	else
	return 0;
	return sum;
}
int main()
{
	int n,s;
	cout << "Enter the number" << endl;
	cin >> n;
	s=sumofdigits(n);
	cout << "The sum of digits=" << s;
}
