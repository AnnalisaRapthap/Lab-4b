#include <iostream>
using namespace std;
int sum(int l,int u)
{
	if(l<=u)
	return sum(l+2,u)+l;
	else
	return 0;
}
int main()
{
	int low,up,sumeven,sumodd;
	cout << "Enter the lower and upper limits" << endl;
    cin >> low >> up;
    if(low%2==0)
    {
    sumeven=sum(low,up);
    sumodd=sum(low+1,up);
    }
    else
    {
    	sumeven=sum(low+1,up);
    	sumodd=sum(low,up);
    }
    cout << "The range is from " <<low << " to " << up <<endl;
    cout << "The sum of all even numbers in the range=" << sumeven << endl;
    cout << "The sum of all odd numbers int the range=" << sumodd << endl;
    
}
