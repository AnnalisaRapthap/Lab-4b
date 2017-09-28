#include <iostream>
using namespace std;
int sum1ton(int i)
{
	if(i==1)
	return(1);
	else
	return (sum1ton(i-1)+i);
}
int main() 
{
	int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    cout << "The sum of natural numbers from 1 to " << n << "= " << sum1ton(n);
}
