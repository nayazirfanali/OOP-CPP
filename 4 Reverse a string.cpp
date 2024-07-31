
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="hello world ";
	reverse(str.begin(),str.end());
	cout<<"\n"<<str<<endl;
	return 0;
}