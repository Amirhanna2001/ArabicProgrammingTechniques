#include <iostream>
using namespace std;
int fact(int n){

    if(n == 1)
        return 1;

    return n * fact(n-1);
}
int sum(int i,int arr[],int s){

    if(i == s) return 0;

    return arr[i]+sum(i+1,arr,s);
}

int power(int x,int y){

    if(y == 1) return x;

    return x*power(x,y-1);
}
int gcd(int x,int y){

    if(y == 0) // !y
        return x;

    return gcd(y,x%y);
}

void Print(string str,int i){

    if(i == -1) return ;
    cout<<str[i];
    Print(str,i-1);
}
int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1)+fib(n-2);
}
int main()
{
    cout<<fib(3);

    return 0;
}
