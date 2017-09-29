#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else if(a<b)
	return gcd(b,a);
	else
	return gcd(b,a%b);
}
int main()
{
	int m,n,hcf;
	cout << "Enter the two numbers" << endl;
	cin >> m >> n;
	hcf=gcd(m,n);
	cout << "The HCF of " << m << " and " << n << " =" << hcf;
}
