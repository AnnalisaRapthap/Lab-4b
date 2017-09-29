#include<iostream>
using namespace std;
int findlcm(int a,int b)
{
	static int i=1;
	if(i%a==0 && i%b==0)
	{
	return 1;
	}
	i++;
	findlcm(a,b);
	return i;
}
int main()
{
	int m,n,lcm;
	cout << "Enter the two numbers" << endl;
	cin >> m >> n;
	lcm=findlcm(m,n);
	cout << "The LCM of " << m << " and " << n << " =" << lcm;
}
