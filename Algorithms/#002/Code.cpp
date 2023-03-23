#include <iostream>
using namespace std;

int gcd(int x, int y){
    if(y == 0) //!y
        return x;

    return gcd(y,x%y);
}
int fac(int n){
    int f=1;
    if(n>0)
        for(int i=1;i<=n;++i)
            f = f*i; // f*=i

    return f;
}
int linearSearch(int a[],int key,int n){
    for(int i=0;i<n;++i){
        if(a[i] == key) return i;
    }
    return -1;
}
int main()
{
    int ar[] = {10,30,-60,70,0};
   cout<<linearSearch(ar,90,5);
    return 0;
}
