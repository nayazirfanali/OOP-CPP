#include <iostream>
#include <string>
using namespace std;
class book{
private:
string name;
int year;
int rate;
public:
book(string book_name,int book_year,int book_rate)
{
cout<<"Constructor is called"<<endl;
name=book_name;
year=book_year;
rate=book_rate;
}
~book(){
cout<<"Destructor is called"<<endl;
}
void display()
{
cout<<"The name of the book for obj: "<<name<<endl;
cout<<"The year of the book for obj: "<<year<<endl;
cout<<"The Rate of the book for obj: "<<rate<<endl;
}
};
int main()
{
book obj1("Harry Potter-III",2004,2550);
obj1.display();
}