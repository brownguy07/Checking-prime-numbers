#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"Enter any number\n";
	cin>>number;
	bool prime=true;
	for(int i=2; i<number; i++)
	{
		if(number%i==0)
		{
			prime=false;
		}
	}
	if(prime)
	{
		cout<<"Is prime\n";
		
	}
	else
	{
		cout<<"IS not prime\n";
	}
}