#include <iostream>
using namespace std;

int main()
{
    cout<<"Arithmetic Operators\n";
    /*
        +
        -
        *
        /
        %
    */
    float x = 10.0;
    int y = 20;
    int  z =  x / y ;// 0.5

    /*
        12 h

        after 3 h

        3 h
    */

    //12 + 3 = 15

    float m = 50 % 10;

    // 25 % 12
    // 25 - 12 = 13 -12 = 1
    // 30 - 11 = 19
    // 19 - 11 = 8

    // 50 % 15
    // 50 - 15 = 35
    // 35 - 15 = 20
    // 20 - 15 = 5


    // 50 % 10
    // 50 - 10 = 40
    // 40 - 10 = 30
    // 30 - 10 = 20
    // 20 - 10 = 10
    // 10 - 10 = 0

    // 0 to n-1

    //cout<<m;

    /*
    int c = 10;
    int r = 20;
    c = c + r; // 10 + 20 = 30
    c = 30;
    c = c +1;
    c = c-1;//30
    c = c * 10;//300
    c = c / 10; // 30
    c +=1; // c = c + 1; => 31
    c -= 5; // 26

    c++;

    */
    int c  =20;

    cout<<c-- << endl;
    cout<<c;
    return 0;
}
