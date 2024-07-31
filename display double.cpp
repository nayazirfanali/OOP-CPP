#include<iostream>
using namespace std;
int main()
{
	double number=3.12457;
	double *ptr=&number;
	cout<<"The value of the num : "<< number<<endl;
	cout<<"the addresss of the num is : "<<ptr<<endl;
	cout<<"the value of *ptr : "<<*ptr<<endl;
}