#include <iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"if , if else , if else if else\n";
    /*cout<<"Enter 2 numbers"<<endl;

    cin>>x>>y;

    if(x == y)
    {
        cout<<"Equals\n";
        cout<<"X is = to y\n";

    }
    else
    {
        cout<<"Not EQ\n";
    }*/
    cout<<"Enter number 1"<<endl;
    cin>>n1;
    cout<<"Enter number 2\n";
    cin>>n2;

    if(n1 == n2)
    {
        cout<<"Equals\n";
    }
    else if (n1 > n2)
    {
        cout<<"n1 is greater than n2\n";
    }
    else
    {
        cout<<"n2 is greater than n1\n";
    }
    return 0;
}
