#include <iostream>

using namespace std;
void swapNumbers(int &n1,int &n2)
{
    int t = n1;
    n1 = n2;
    n2 = t;
    //cout<<"n1 = "<<n1<<" n2 = "<<n2;

}
int main()
{
    cout<<"Function \n\n";
    int n1=20;
    int n2=30;
    //swap(n1,n2);
    swapNumbers(n1,n2);
    cout<<"n1 = "<<n1<<" n2 = "<<n2;

    return 0;
}




















