#include <iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int getMax(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}
int main()
{
    cout<<"Function \n\n";
    //cout<<pow(2,5);
    //cout<<ceil(-10.5);
    //cout<<floor(-10.5);
    //cout<<round(10.5);
    //cout<<fmod(10.5,2);
    //cout<<sqrt(4);
    //cout<<getMax(5,3);
    //cout<<max(5,3);
    //cout<<getMax(getMax(3,5)  ,getMax(10,20));
    cout<<min(min(2,4),3);
    return 0;
}




















