#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the Value of a and b \n";
	cin>>a;
	cin>>b;
	int x=a-b;
	try
	{
		if(x!=0)
		{
			cout<<"result(a/x)="<< a/x<<"\n";
		}
		else
		{
			throw(x);
		}
	}
	catch(int i)
	{
		cout<<"Execption caught: x="<<x<<"\n";
	}
	cout<<"END";
	return 0;
}