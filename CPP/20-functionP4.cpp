#include <iostream>

using namespace std;
double sum(double n1,double n2)
{
    cout<<"D\n";
    return n1+n2;
}
int sum(int x,int y)
{
    cout<<"Int\n";
    return x+y;
}

int sum(int x,int y,int z)
{
    return x+y+z;
}
void employeeInfo(string name,double salary=3000)
{
    cout<<"Hello "<<name;
    cout<<"Your salary = "<<salary;
}
int main()
{
    //int 4 bytes
    //double 8 bytes

    cout<<"Function overload \n\n";
    employeeInfo("Amir",5000);
    return 0;
}




















