#include <iostream>
using namespace std;

//function declare:
//dataType functionName (params)

int sum2Numbers(int x, int y)
{
    return x+y;
    
}

void sayHello(string name)
{
    cout<<"Hello "<<name;
    return;
}

float sum3Numbers(float x,float y,float z)
{
    return x+y+z;
}

float avg(float n1,float n2,float n3)
{
    return sum3Numbers(n1,n2,n3)/3;
}

int main()
{
    cout<<"Function \n\n";
    /*int n1,n2;
    cout<<"enter 2 numbers\n";
    cin>>n1>>n2;

    cout<<sum2Numbers(n1,n2);*/

    /*cout<<"Enter name\n";
    string name;
    cin>>name;
    sayHello(name);*/
    
    float x,y,z;
    cout<<"Enter 3 numbers\n";
    cin>>x>>y>>z;
    cout<<"The sum is "<<sum3Numbers(x,y,z)<<"\n";
    cout<<"Avg is "<<avg(x,y,z)<<endl;

    return 0;
}




















