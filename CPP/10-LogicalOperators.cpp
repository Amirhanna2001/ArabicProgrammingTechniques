#include <iostream>
using namespace std;

int main()
{
    cout<<"Logical Operators\n";
    /*
        x   y   And(&&)     OR(||)  NOTx (!)
        0   0       0           0       1
        0   1       0           1       1
        1   0       0           1       0
        1   1       1           1       0
    */
    int n1,n2;
    cout<<"Enter  number \n";
    cin>>n1;
    if(n1 >= 10 || n1 <= 20) // 1
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    return 0;
}
