#include<iostream>
#include<string>
using namespace std;
int main()
{
	std::string str="Hello World !";
	std::string *ptr= &str;
	std::cout<<"The value of the String is : "<<*ptr<<std::endl;
	return 0;
}