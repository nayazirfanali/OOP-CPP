#include <iostream>
#include <string>
using namespace std;
class car{
private:
string name;
int year;
int rate;
public:
car(string car_name,int car_year,int car_rate)
{
cout<<"Constructor is called"<<endl;
name=car_name;
year=car_year;
rate=car_rate;
}
~car(){
cout<<"Destructor is called"<<endl;
}
void display()
{
cout<<"The name of the car for obj: "<<name<<endl;
cout<<"The year of the car for obj: "<<year<<endl;
cout<<"The Rate of the car for obj: "<<rate<<endl;
}
};
int main()
{
car obj1("Swift",2004,255000);
obj1.display();
}