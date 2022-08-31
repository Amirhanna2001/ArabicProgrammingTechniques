#include <iostream>

using namespace std;
void printNum(int n)
{
    if(n <= 0)
        return;
    else
        cout<<n<<' ';//3 2 1

    printNum(n-1);
}
int sum(int n)
{

    if(n<=0)
        return 0;
    else
        return n + sum(n-1);
}
// !0 = !1 = 1
/*fact6 = 6*fact5
            5*fac4
*/
int fact(int n){
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
}/*
0  1 2 3 4 5 .....
0  1 1 2 3 5 .....*/
int fib(int n)
{
    if(n == 0) return 0;
    else if(n == 1 || n == 2) return 1;
    else
        return fib(n-1)+fib(n-2);
}
int main()
{
    cout<<"Function Recursion\n";
    //printNum(3);
    //cout<<sum(4);
    //cout<<fact(4);
    cout<<fib(4);
    return 0;
}




















