#include<iostream>
using namespace std;
int main()
{
	float number =45.6;
	float *ptr = &number;
	std::cout<<"the value of the float is " << *ptr << std::endl;
	return 0;
}