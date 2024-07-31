#include <iostream>
#include <string>
using namespace std;
class bank{
private:
string name;
int account_no;
int amount;
public:
bank(string bank_name,int bank_acc,int bank_amount)
{
cout<<"Constructor is called"<<endl;
name=bank_name;
account_no=bank_acc;
amount=bank_amount;
}
~bank(){
cout<<"Destructor is called"<<endl;
}
void display()
{
cout<<"The name of the client for obj: "<<name<<endl;
cout<<"The account no of client for obj: "<<account_no<<endl;
cout<<"The amount available for client for obj: "<<amount<<endl;
}
};
int main()
{
bank obj1("Merwin",1233,255);
obj1.display();
}