#include<iostream>
using namespace std;
float fact(float a)
{
	if(a==1)
	return 1;
	else
	return a*fact(a-1);
	
}
int main()
{
	float n,f;
	cout << "Enter the number" << endl;
	cin >> n;
	f=fact(n);
	cout << "The factorial=" << f;
}
