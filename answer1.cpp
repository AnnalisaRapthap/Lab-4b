#include <iostream>

using namespace std;
int power(int b,int e )
{
    if(e==0)
        return 1;
    else
        return b*power(b,(e-1));
}
int main()
{
    int base, expo,pow;
    cout << "Enter the base" << endl;
    cin >> base;
    cout << "Enter the exponent" << endl;
    cin >> expo;
    pow=power(base,expo);
    cout << "The power=" << pow;
