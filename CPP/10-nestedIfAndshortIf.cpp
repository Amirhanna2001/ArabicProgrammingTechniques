#include <iostream>
using namespace std;

int main()
{
    cout<<"if part 2\n\n";
/*
    int n ;
    cout<<"Enter number\n";
    cin>>n;

    if(n >= 0)
    {
        if(n %2 == 0)
            cout<<"Even\n";
        else
            cout<<"Odd\n";
    }
    else
        cout<<"Negative\n";*/

    int n ;
    cout<<"Enter number\n";
    cin>>n;

    string s;
    
    if(n % 2 == 0)
        s = "Even";
    else
        s = "Odd";

    s = (n % 2 == 0)?"Even":"Odd";
    
    cout<<s;
    return 0;
}













