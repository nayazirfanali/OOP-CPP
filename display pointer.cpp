#include<iostream>
using namespace std;
int main()
{
	int integer = 45;
	int *ptr = &integer;
	cout<<"the value of the integer is "<< *ptr << endl;
	return 0;
}