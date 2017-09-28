#include <iostream>
using namespace std;
void print(int i)
{
	if(i>=1)
	{
		print(i-1);
		printf("  %d",i);
	}
}
int main() 
{
	int n;
	cout << "Enter the value of n" << endl;
	cin >> n;
	print(n);
}
