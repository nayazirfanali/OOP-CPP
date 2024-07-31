#include<iostream>
using namespace std;
int main()
{
	char character = 'A';
	char *charptr=&character;
	std::cout<<"The value of the Character is "<<*charptr<<std::endl;
	return 0;
}